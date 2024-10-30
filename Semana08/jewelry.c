#include <stdio.h>

#define MAX_SIZE 50

enum sequence { decreasing, increasing, same };

int main() {
  int dimension;
  enum sequence row_s, col_s;
  int matrix[MAX_SIZE][MAX_SIZE];

  scanf("%d", &dimension);

  for (int i = 0; i < dimension; i++)
    for (int j = 0; j < dimension; j++)
      scanf("%d", &matrix[i][j]);

  if (matrix[0][1] < matrix[0][0])
    row_s = decreasing;
  else if (matrix[0][1] > matrix[0][0])
    row_s = increasing;
  else
    row_s = same;

  if (matrix[1][0] < matrix[0][0])
    col_s = decreasing;
  else if (matrix[1][0] > matrix[0][0])
    col_s = increasing;
  else
    col_s = same;

  if (row_s == increasing && col_s == increasing)
    printf("0");
  else if (row_s == decreasing && col_s == increasing)
    printf("1");
  else if (row_s == decreasing && col_s == decreasing)
    printf("2");
  else
    printf("3");

  return 0;
}