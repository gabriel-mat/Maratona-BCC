#include <stdio.h>

int main() {
  int test_cases, seq_length, num_cases, num, seq, gc;

  scanf("%d", &test_cases);

  for (int i = 0; i < test_cases; i++) {
    scanf("%d %d", &seq_length, &num_cases);

    scanf("%d", &seq);

    for (int k = 0; k < seq_length - 1; k++)
      scanf("%d", &gc);

    for (int j = 0; j < num_cases; j++) {
      scanf("%d", &num);

      if (num >= seq)
        printf("%d ", seq - 1);
      else
        printf("%d ", num);
    }

    printf("\n");
  }

  return 0;
}