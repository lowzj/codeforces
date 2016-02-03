#include <iostream>
using namespace std;
int A[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
int count(int x) {
    int total = 0;
    if (x == 0) return A[0];
    while (x > 0) {
        total += A[x % 10];
        x = x / 10;
    }
    return total;
}
int main(void) {
    int a, b, c;
    c = 0;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) c += count(i);
    cout << c << endl;
    return 0;
}
