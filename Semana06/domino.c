#include <stdio.h>

int main()
{
    // m x n board, 2 x 1 piece
    int m, n;
    
    scanf("%d %d", &m, &n);

    printf("%d", (m*n)/2);
    
    return 0;
}