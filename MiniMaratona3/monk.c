#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000

int compare(const void *a, const void *b);

int main()
{
    long long ans;
    int casserole[MAX_SIZE];
    int test_cases, size, pieces;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        scanf("%d %d", &size, &pieces);

        for (int j = 0; j < pieces; j++)
            scanf("%d", &casserole[j]);

        // O TLE deve estar vindo daqui
        qsort(casserole, pieces, sizeof(int), compare);

        ans = 0;

        for (int j = 0; j < pieces - 1; j++)
        {
            ans += 2 * (casserole[j] - 1);
        }

        ans += pieces - 1;
        printf("%lld\n", ans);
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}