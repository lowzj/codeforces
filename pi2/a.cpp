#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

#define N 100001
int main(void) {
  int n, minx, maxx;
  int x[N];
  cin >> n;
  for (int i = 0; i < n; ++i) cin >> x[i];
  for (int i = 0; i < n; ++i) {
    if (i == 0) minx = x[i+1] - x[i];
    else if (i == n-1) minx = x[i] - x[i-1];
    else minx = min(x[i] - x[i-1], x[i+1] - x[i]);
    maxx = max(x[i] - x[0], x[n-1] - x[i]);
    cout << minx << " " << maxx << endl;
  }
  return 0;
}
