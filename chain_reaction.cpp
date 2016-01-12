#include <iostream>
#include <algorithm>

using namespace std;

#define N 100001

struct A {
    int p;
    int l;
};

bool cmp(const A& a, const A& b) {
    return a.p < b.p;
}

int main(void) {
    int n;
    A a[N];
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i].p >> a[i].l;
    for (int i = 0; i < n; ++i) a[i].l = a[i].p - a[i].l;
    sort(a, a + n, cmp);

    int count = 0;
    for (int i = n - 1; i > 0; --i) {
        if (a[i].l <= a[i-1].p && a[i].l >= a[i-1].l) {
            // i-1 destroyed
            ++count;
            a[i-1].l = a[i].l;
        } else if (a[i].l < a[i-1].l) {
            ++count;
        }
    }
    cout << count << endl;
    return 0;
}
