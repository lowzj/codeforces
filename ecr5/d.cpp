#include <iostream>
#include <queue>
#include <stdio.h>

using namespace std;

#define N 1000001

int m[N]; 
int main(void) {
    int n, k, a, c;
    int l, r;
    int ml, mr;
    queue<int> q;
    scanf("%d %d", &n, &k);

    c = 0;
    l = r = ml = mr = 1;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a);
        q.push(a);
        r = i;
        if (m[a] == 0) ++c;
        m[a]++;
        if (c > k) {
            --c;
            if (r - l - 1 > mr - ml) {
                ml = l;
                mr = r - 1;
            }
            for (int front = q.front(); !q.empty(); front = q.front()) {
                q.pop();
                --m[front];
                ++l;
                if (m[front] == 0) break;
            }
        } else if (r - l > mr - ml) {
            ml = l;
            mr = r;
        }
    }
    printf("%d %d\n", ml, mr);

    return 0;
}
