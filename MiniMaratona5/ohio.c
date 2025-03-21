#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char string[MAX_SIZE + 1];
    int test_cases, size, iterator, aux;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        scanf(" %100[^\n]", string);

        size = strlen(string);

        iterator = size - 1;

        aux = 0;

        while (iterator >= 1)
        {
            if (string[iterator - 1] == string[iterator])
            {
                aux = 1;
                break;
            }

            iterator--;
        }

        if (aux)
            printf("1\n");
        else
            printf("%d\n", size);
    }

    return 0;
}