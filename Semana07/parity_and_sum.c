#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 200000

int compare(const void *a, const void *b);

int main() {
  int even[MAX_SIZE];
  long long int max_odd;
  int test_cases, num_elements, i_odd, i_even, element, max_even, min_even,
      counter;

  scanf("%d", &test_cases);

  for (int i = 0; i < test_cases; i++) {
    i_odd = i_even = counter = 0;

    scanf("%d", &num_elements);

    for (int j = 0; j < num_elements; j++) {
      scanf("%d", &element);

      if (element % 2 == 1) {
        if (i_odd == 0 || element > max_odd)
          max_odd = element;
        i_odd++;
      } else
        even[i_even++] = element;
    }

    if (i_odd == 0 || i_even == 0) {
      printf("0\n");
      continue;
    }

    qsort(even, i_even, sizeof(int), compare);

    min_even = 0;
    max_even = i_even - 1;

    while (max_even >= min_even) {
      if (even[min_even] < max_odd) {
        counter++;
        max_odd += even[min_even];
        min_even++;
      } else {
        counter++;
        max_odd += even[max_even];
      }
    }

    printf("%d\n", counter);
  }

  return 0;
}

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }