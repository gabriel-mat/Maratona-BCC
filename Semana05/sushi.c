#include <stdio.h>

#define MAX_SIZE 100000

enum type { tuna = 1, eel };

int main() {
  int sushi[MAX_SIZE];
  int pieces, qtd_tuna, qtd_eel, diff, max_sub, sub, diff_point;

  scanf("%d", &pieces);

  for (int i = 0; i < pieces; i++)
    scanf("%d", &sushi[i]);

  qtd_tuna = qtd_eel = diff = max_sub = diff_point = 0;

  for (int i = 0; i < pieces; i++) {
    if (i > diff_point && sushi[i] != sushi[i - 1]) {
      diff++;

      if (diff == 1)
        diff_point = i;
    }

    if (diff == 2 || i == pieces - 1) {
      if (i == pieces - 1) {
        if (sushi[i] == tuna)
          qtd_tuna++;
        else if (sushi[i] == eel)
          qtd_eel++;
      }

      if (qtd_eel >= qtd_tuna)
        sub = 2 * qtd_tuna;
      else
        sub = 2 * qtd_eel;

      if (sub > max_sub)
        max_sub = sub;

      qtd_tuna = qtd_eel = diff = 0;

      if (i < pieces - 1)
        i = diff_point - 1;

      continue;
    }

    if (sushi[i] == tuna)
      qtd_tuna++;
    else if (sushi[i] == eel)
      qtd_eel++;
  }

  printf("%d", max_sub);

  return 0;
}