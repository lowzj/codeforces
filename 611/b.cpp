#include <iostream>

using namespace std;

unsigned long long x[64 * 64];
int n = 0;
void init() {
    unsigned long long min = 1;
    unsigned long long max = -1;
    unsigned long long inc = 1;
    for (int i = 1; i < 64; ++i) {
        inc *= 2;
        min += inc;
        unsigned long long dec = inc / 2;
        for (int j = 0; j < i && dec > 0; ++j) {
            unsigned long long val = min - dec;
            dec /= 2;
            if (val > 1) {
                x[n++] = val;
            }
        }
    }
}

int main(void) {
    unsigned long long a, b;
    init();
    cin >> a >> b;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (x[i] >=a && x[i] <= b) ++count;
    }
    cout << count << endl;
    return 0;
}
