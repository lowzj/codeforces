#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(void) {
  set<int> s;
  int maxNum, now;
  int n, r;
  char c;

  maxNum = now = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> c >> r;
    if (c == '-') {
      if (s.find(r) != s. end()) {
        --now;
        s.erase(r);
      } else {
        ++maxNum;
      }
    } else {
      ++now;
      s.insert(r);
      maxNum = max(maxNum, now);
    }
  }
  cout << maxNum << endl;
  return 0;
}
