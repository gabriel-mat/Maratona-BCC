#include <stdio.h>

#define MAX_CUBES 100

int compare(const void *a, const void *b);

int main()
{
    int test_cases, n_cubes, n_fav, n_rem, val_fav;
    int cubes[MAX_CUBES];

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        scanf("%d %d %d", &n_cubes, &n_fav, &n_rem);

        for (int j = 0; j < n_cubes; j++)
            scanf("%d", &cubes[j]);

        n_fav--;
        n_rem--;
        val_fav = cubes[n_fav];

        qsort(cubes, n_cubes, sizeof(int), compare);

        if (val_fav > cubes[n_rem] || n_rem >= n_cubes - 1 || cubes[n_rem + 1] < val_fav)
            printf("YES\n");
        else if (cubes[n_rem] > val_fav)
            printf("NO\n");
        else
            printf("MAYBE\n");
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}