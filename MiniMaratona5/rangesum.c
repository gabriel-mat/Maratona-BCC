#include <stdio.h>

#define MAX_SIZE 200000

int main()
{
    long long int values[MAX_SIZE + 1];
    int num_values, num_queries, rangeL, rangeR;

    scanf("%d %d", &num_values, &num_queries);

    values[0] = 0;
    for (int i = 1; i <= num_values; i++)
        scanf("%lld", &values[i]);

    for (int i = 1; i <= num_values; i++)
        values[i] += values[i - 1];

    for (int i = 0; i < num_queries; i++)
    {
        scanf("%d %d", &rangeL, &rangeR);

        printf("%lld\n", values[rangeR] - values[rangeL - 1]);
    }

    return 0;
}