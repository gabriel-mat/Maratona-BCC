#include <stdio.h>

#define MAX_SIZE 100000

int compare(const void *a, const void *b);

int main()
{
    int size, type, num_quests, a, b;
    int array[MAX_SIZE + 1], non_dec[MAX_SIZE + 1];
    long long pre1[MAX_SIZE + 1], pre2[MAX_SIZE + 1];

    scanf("%d", &size);

    array[0] = non_dec[0] = 0;

    for (int i = 1; i <= size; i++)
    {
        scanf("%d", &array[i]);
        non_dec[i] = array[i];
    }

    qsort(non_dec, size + 1, sizeof(int), compare);

    pre1[0] = pre2[0] = 0;

    for (int i = 1; i <= size; i++)
    {
        pre1[i] = array[i] + pre1[i - 1];
        pre2[i] = non_dec[i] + pre2[i - 1];
    }

    scanf("%d", &num_quests);

    for (int i = 0; i < num_quests; i++)
    {
        scanf("%d %d %d", &type, &a, &b);

        if (type == 1)
            printf("%lld\n", pre1[b] - pre1[a - 1]);
        else
            printf("%lld\n", pre2[b] - pre2[a - 1]);
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}