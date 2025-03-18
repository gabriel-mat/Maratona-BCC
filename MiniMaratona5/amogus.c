#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10

int main()
{
    int test_cases, size;
    char string[MAX_SIZE + 1];

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        scanf(" %10[^\n]", string);

        size = strlen(string);

        string[size - 1] = '\0';
        string[size - 2] = 'i';

        printf("%s\n", string);
    }

    return 0;
}