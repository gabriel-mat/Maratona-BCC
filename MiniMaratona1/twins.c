#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int compare(const void *a, const void *b);

int main() {
  int num, sum_left, sum_mine, counter, iterator;
  int coins[MAX_SIZE];

  scanf("%d", &num);

  counter = sum_left = sum_mine = 0;

  for (int i = 0; i < num; i++) {
    scanf("%d", &coins[i]);
    sum_left += coins[i];
  }

  qsort(coins, num, sizeof(int), compare);

  while (sum_left >= sum_mine) {
    sum_left -= coins[num - 1 - counter];
    sum_mine += coins[num - 1 - counter];
    counter++;
  }

  printf("%d", counter);

  return 0;
}

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }