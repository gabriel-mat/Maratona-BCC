#include <stdio.h>
#include <stdlib.h>

int dist(int a, int b);
int compare(const void *a, const void *b);

int main()
{
    int x[3];
    int test_cases;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &x[j]);

        qsort(x, 3, sizeof(int), compare);

        printf("%d\n", dist(x[0], x[2]));
    }
    return 0;
}

int dist(int a, int b)
{
    if (a > b)
        return (a - b);
    return (b - a);
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}