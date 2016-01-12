#include <iostream>

using namespace std;

#define MIN(a, b) (a) < (b) ? (a) : (b)
#define MAX(a, b) (a) > (b) ? (a) : (b)

int main(void) {
  int s[6] = {0};

  for (int i = 0; i < 6; ++i) {
    cin >> s[i];
  }

  int t1 = s[0];
  int h1 = MIN(s[1], s[5]);

  int t2 = s[3];
  int h2 = MIN(s[2], s[4]);

  int m1 = MAX(s[1], s[5]);
  int m2 = MAX(s[2], s[4]);
  int b= t1 + h1;

  int total = t1*h1 + t2*h2 + b*(m1+m2);
  cout << total << endl;

  return 0;
}
