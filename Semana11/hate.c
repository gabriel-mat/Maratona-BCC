#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

int menor(int a, int b);

int main()
{
    int tests, size, min;
    int a0, a1, b0, b1;
    char string[MAX_SIZE + 1];

    // separar 0's e 1's:
    // "1010" -> "1100" ou "0011"

    scanf("%d", &tests);

    for (int i = 0; i < tests; i++)
    {
        scanf(" %1000[^\n]", string);

        size = strlen(string);

        a0 = b0 = a1 = b1 = 0;

        for (int j = 0; j < size; j++)
            if (string[j] == '1')
                b1++;
            else
                b0++;

        min = menor(b0, b1);

        for (int j = 0; j < size; j++)
        {
            if (string[j] == '0')
            {
                a0++;
                b0--;
            }
            else
            {
                a1++;
                b1--;
            }

            min = menor(min, a1 + b0);
            min = menor(min, a0 + b1);
        }

        printf("%d\n", min);
    }

    return 0;
}

int menor(int a, int b)
{
    if (a < b)
        return a;
    return b;
}