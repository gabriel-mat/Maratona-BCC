#include <stdio.h>

#define MAX_SIZE 200000

int main()
{
    int num, input;
    int array[MAX_SIZE];

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
        array[i] = 0;

    for (int i = 0; i < num - 1; i++)
    {
        scanf("%d", &input);
        array[input - 1] = 1;
    }

    for (int i = 0; i < num; i++)
        if (!array[i])
        {
            printf("%d\n", i + 1);
            break;
        }

    return 0;
}