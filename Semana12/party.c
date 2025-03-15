#include <stdio.h>

#define MAX_SIZE 2000

int maior(int a, int b);

int main()
{
    int emp[MAX_SIZE];
    int num_emp, depth, max_depth, it;

    scanf("%d", &num_emp);

    for (int i = 0; i < num_emp; i++)
        scanf("%d", &emp[i]);

    max_depth = 1;

    for (int i = 0; i < num_emp; i++)
    {
        it = emp[i];
        depth = 1;

        while (it != -1)
        {
            depth++;
            it = emp[it - 1];
        }

        max_depth = maior(max_depth, depth);
    }

    printf("%d\n", max_depth);

    return 0;
}

int maior(int a, int b)
{
    if (a > b)
        return a;
    return b;
}