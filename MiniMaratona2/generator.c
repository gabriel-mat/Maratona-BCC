#include <stdio.h>

#define MAX_SIZE 50

int main()
{
    char string[MAX_SIZE + 1], levels[7];
    int test_cases, n_problems, n_rounds, iterator, sum;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        scanf("%d %d", &n_problems, &n_rounds);
        scanf(" %50[^\n]", string);

        iterator = sum = 0;

        for (int j = 0; j < 7; j++)
            levels[j] = 0;

        while (string[iterator] != '\0')
        {
            levels[string[iterator] - 'A']++;
            iterator++;
        }

        for (int j = 0; j < 7; j++)
            if (levels[j] < n_rounds)
                sum += n_rounds - levels[j];

        printf("%d\n", sum);
    }

    return 0;
}