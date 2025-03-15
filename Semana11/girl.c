#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 200000

int compare(const void *a, const void *b);

int main()
{
    long long sum, pesos[MAX_SIZE + 1];
    int size, queries, q0, q1, array[MAX_SIZE];

    scanf("%d %d", &size, &queries);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
        pesos[i] = 0;
    }

    for (int i = 0; i < queries; i++)
    {
        scanf("%d %d", &q0, &q1);

        pesos[q0 - 1]++;
        pesos[q1]--;
    }

    for (int i = 1; i < size; i++)
        pesos[i] += pesos[i - 1];

    qsort(array, size, sizeof(int), compare);
    qsort(pesos, size, sizeof(long long int), compare);

    sum = 0;

    for (int i = 0; i < size; i++)
        sum += pesos[i] * array[i];

    printf("%lld\n", sum);

    return 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}