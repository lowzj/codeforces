#include <iostream>
#include <string.h>
using namespace std;

#define MAXL 200001

char A[MAXL];
char B[MAXL];

int equals(char* a, char* b, int len) {
  if (len == 1) return a[0] == b[0];
  if (len == 2) return (a[0] == b[0] && a[1] == b[1]) || (a[0] == b[1] && a[1] == b[0]);
  if (len & 1) {
    for (int i = 0; i < len; ++i)
      if (a[i] != b[i]) return 0;
    return 1;
  }
  int amid = len / 2;
  int bmid = len / 2;
  return (equals(a, b, len / 2) && equals(a + amid, b + bmid, len / 2)) ||
    (equals(a, b + bmid, len / 2) && equals(a + amid, b, len / 2));
}

int main(void) {
  cin >> A >> B;
  int len = strlen(A);
  if (equals(A, B, len)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
