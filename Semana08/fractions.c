#include <stdio.h>

int main() {
  int n;
  int f = 0, i = 1, b = 0;

  scanf("%d", &n);

  if (n == 0)
    printf("1");

  while (n--) {
    b = f + i;
    f = i;
    i = b;
  }

  printf("%d", b);

  return 0;
}