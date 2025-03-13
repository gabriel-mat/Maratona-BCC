#include <stdio.h>

#define MAX_SIZE 200000

int main()
{
    char string[MAX_SIZE + 1];
    int test_cases, size, white, iterator, count;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        scanf("%d %d", &size, &white);

        scanf(" %200000[^\n]", string);

        count = iterator = 0;

        while (iterator < size)
        {
            if (string[iterator] == 'B')
            {
                iterator += white;
                count++;
            }
            else
                iterator++;
        }

        printf("%d\n", count);
    }

    return 0;
}