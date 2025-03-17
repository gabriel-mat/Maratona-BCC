#include <stdio.h>

#define MAX_SIZE 100

int main() {
  int n, ans[MAX_SIZE], input;

  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &input);
    ans[input - 1] = i + 1;
  }

  for (int i = 0; i < n; i++)
    printf("%d ", ans[i]);

  return 0;
}