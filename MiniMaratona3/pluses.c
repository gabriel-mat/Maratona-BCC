#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int abc[3];
    int test_cases;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &abc[j]);

        for (int j = 0; j < 5; j++)
        {
            qsort(abc, 3, sizeof(int), compare);
            abc[0]++;
        }

        printf("%d\n", abc[0] * abc[1] * abc[2]);
    }

    return 0;
}