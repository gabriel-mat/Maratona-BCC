#include <stdio.h>

#define MAX_PEOPLE 50

int main() {
  int people[MAX_PEOPLE], helped[MAX_PEOPLE];
  int test_cases, people_count, threshold, robins_gold = 0, counter = 0;

  scanf("%d", &test_cases);

  for (int i = 0; i < test_cases; i++) {
    scanf("%d %d", &people_count, &threshold);
    robins_gold = counter = 0;

    // intial gold
    for (int j = 0; j < people_count; j++)
      scanf("%d", &people[j]);

    for (int j = 0; j < people_count; j++)
      helped[j] = 0;

    for (int j = 0; j < people_count; j++) {
      if (people[j] == 0 && robins_gold > 0) {
        people[j] = 1;
        robins_gold--;

        if (helped[j] == 0) {
          counter++;
          helped[j] = 1;
        }
      } else if (people[j] >= threshold) {
        robins_gold += people[j];
        people[j] = 0;
      }
    }

    printf("%d\n", counter);
  }

  return 0;
}