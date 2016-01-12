#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

#define M 1000001
char a[M];
char b[M];
int main(void) {
    scanf("%s\n%s", a, b);
    int sa, sb, ea, eb;
    sa = sb = 0;
    ea = strlen(a);
    eb = strlen(b);
    for (int i = 0; i < M; ++i) {
        if (a[i] != '0') {
            sa = i;
            break;
        }
    }
    for (int i = 0; i < M; ++i) {
        if (b[i] != '0') {
            sb = i;
            break;
        }
    }
    if (ea - sa > eb - sb) cout << '>' << endl;
    else if (ea - sa < eb - sb) cout << '<' << endl;
    else {
        int equal = 1;
        for (int i=sa, j=sb; a[i] && b[j]; ++i, ++j) {
            if (a[i] > b[j]) {
                cout << '>' << endl;
                equal = 0;
                break;
            }
            else if (a[i] < b[j]) {
                cout << '<' << endl;
                equal = 0;
                break;
            }
        }
        if (equal) cout << "=" << endl;
    }
    return 0;
}
