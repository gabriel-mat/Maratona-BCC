#include <stdio.h>

#define MAX_SIZE 1000

typedef int score;

int main() {
  int cards[MAX_SIZE], cards_amt, i_min, i_max, turn;
  score sereja_scr, dima_scr;

  scanf("%d", &cards_amt);

  for (int i = 0; i < cards_amt; i++)
    scanf("%d", &cards[i]);

  i_min = 0;
  i_max = cards_amt - 1;

  sereja_scr = dima_scr = turn = 0;

  while (i_min <= i_max) {
    if (!(turn % 2)) {
      // Sereja
      if (cards[i_min] >= cards[i_max]) {
        sereja_scr += cards[i_min];
        i_min++;
      } else {
        sereja_scr += cards[i_max];
        i_max--;
      }
    } else {
      // Dima
      if (cards[i_min] >= cards[i_max]) {
        dima_scr += cards[i_min];
        i_min++;
      } else {
        dima_scr += cards[i_max];
        i_max--;
      }
    }

    turn++;
  }

  printf("%d %d", sereja_scr, dima_scr);

  return 0;
}