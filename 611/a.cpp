#include <iostream>
#include <string>

using namespace std;

int m[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int w[366] = {0};
void init() {
    for (int i = 0; i < 366; ++i) {
        w[i] = (4 + i) % 7 + 1;
    }
}

int main(void) {
    int num;
    string of, s;

    init();
    cin >> num >> of >> s;
    int count = 0;
    if (s == "week") {
        for (int i = 0; i < 366; ++i) if (w[i] == num) ++count;
    } else {
        for (int i = 0; i < 12; ++i) if (m[i] >= num) ++count;
    }
    cout << count << endl;
    return 0;
}
