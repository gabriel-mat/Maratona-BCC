#include <stdio.h>

#define MAX_SIZE 50

void sort(int *a, int size);

int main() {
  int test_cases, array_length, array[MAX_SIZE], sum;

  scanf("%d", &test_cases);

  for (int i = 0; i < test_cases; i++) {
    scanf("%d", &array_length);

    for (int j = 0; j < array_length; j++)
      scanf("%d", &array[j]);

    sort(array, array_length);

    sum = (array[0] + array[1]) / 2;

    for (int j = 2; j < array_length; j++)
      sum = (sum + array[j]) / 2;

    printf("%d\n", sum);
  }
  return 0;
}

void sort(int *a, int size) {
  // bubble sort (bad)
  int aux, swap;

  for (int i = 0; i < size; i++) {
    swap = 0;
    for (int j = 0; j < size - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        aux = a[j];
        a[j] = a[j + 1];
        a[j + 1] = aux;
        swap = 1;
      }
    }
    if (!swap)
      return;
  }
}