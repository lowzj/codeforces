#include <iostream>
#include <algorithm>

using namespace std;

#define N 100001

int a[N]; 

int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a + n);

    long long total = 0;
    int pre = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] & 1) pre += a[i];
        else total += a[i];
        if (!(pre & 1)) total += pre, pre = 0;
    }
    cout << total << endl;
}

