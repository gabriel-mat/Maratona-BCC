#include <stdio.h>

int hit(int l, int c);

int main()
{
    char input;
    int test_cases, points;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        points = 0;

        for (int l = 0; l < 10; l++)
        {
            for (int c = 0; c < 10; c++)
            {
                scanf(" %c", &input);

                if (input == 'X')
                    points += hit(l, c);
            }
        }

        printf("%d\n", points);
    }

    return 0;
}

int hit(int l, int c)
{
    for (int i = 0; i < 5; i++)
        if (l == i || l == 9 - i || c == i || c == 9 - i)
            return (i + 1);
    return 0;
}