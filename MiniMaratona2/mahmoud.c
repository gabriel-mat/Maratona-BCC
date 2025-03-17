#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100000

int length(char *str);

int main() {
  int l1, l2;
  char s1[MAX_SIZE + 1], s2[MAX_SIZE + 1];

  scanf("%100000[^\n]", s1);
  scanf("%*c");
  scanf("%100000[^\n]", s2);

  l1 = length(s1);
  l2 = length(s2);

  if (strcmp(s1, s2) == 0)
    printf("-1");
  else if (l1 >= l2)
    printf("%d", l1);
  else
    printf("%d", l2);

  return 0;
}

int length(char *str) {
  int l;

  l = 0;

  while (str[l] != '\0')
    l++;

  return l;
}