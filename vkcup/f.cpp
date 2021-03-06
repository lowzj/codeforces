#include <stdio.h>

#define NMAX 1000010
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int A[NMAX];

int main(void) {
  int max = 0;
  int n;

  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    int a;
    scanf("%d", &a);
    A[a]++;
    for (int j = a*2; j < NMAX; j += a) {
      A[j] = MAX(A[j], A[a]);
    }
    max = MAX(A[a], max);
  }
  printf("%d\n", max);
  return 0;
}
