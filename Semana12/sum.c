#include <stdio.h>

int main()
{
    long long sum, ind;
    int test_cases;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        scanf("%lld", &ind);

        sum = 0;

        ind--;

        while (ind > 0)
        {
            sum += ind + 1;
            ind = (ind - 1) / 2;
        }

        sum++;

        printf("%lld\n", sum);
    }

    return 0;
}