#include <iostream>
using namespace std;

int N[501][501];
char c[501][501];

int main(void) {
    int h, w;
    cin >> h >> w;
    for (int i = 0; i <= h; ++i) c[i][0] = '#';
    for (int i = 0; i <= w; ++i) c[0][i] = '#';
    for (int i = 1; i <= h; ++i) {
        for (int j = 1; j <= w; ++j) {
            cin >> c[i][j];
        }
    }
    cout << endl;
    for (int i = 1; i <=h; ++i) {
        for (int j = 1; j <= w; ++j) {
            int inc = 0;
            for (int k = 1; k <= i; ++k) {
                if (c[k][j] == '.' && c[k][j-1] == '.') ++inc;
                if (c[k][j] == '.' && c[k-1][j] == '.') ++inc;
            }
            N[i][j] = N[i][j-1] + inc;
            // cout << N[i][j] << " ";
        }
        // cout << endl;
    }
    int q;
    int r1, r2, c1, c2;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> r1 >> c1 >> r2 >> c2;
        int val = N[r2][c2] - N[r2][c1] - N[r1][c2] + N[r1][c1];
        for (int j = r1+1; j <= r2; ++j) val += (c[j][c1] == '.' && c[j-1][c1] == '.');
        for (int j = c1+1; j <= c2; ++j) val += (c[r1][j] == '.' && c[r1][j-1] == '.');
        cout << val << endl;
    }

    return 0;
}
