#include <iostream>

using namespace std;

#define N 101
int main(void) {
    int n, m, c;
    cin >> n >> m;
    int minMax = 0;
    for (int i = 0; i < n; ++i) {
        int min = 1000000000;
        for (int j = 0; j < m; ++j) {
            cin >> c;
            if (min > c) min = c;
        }
        if (minMax < min) minMax = min;
    }
    cout << minMax << endl;

    return 0;
}
