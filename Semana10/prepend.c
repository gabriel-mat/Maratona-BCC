#include <stdio.h>

#define MAX_SIZE 2000

int shrink(char *msb, char *lsb);

int main()
{
    int test_cases, size, count;
    char string[MAX_SIZE + 1];
    char *msb, *lsb;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        scanf("%d", &size);

        scanf(" %2000[^\n]", string);

        if (!size)
        {
            printf("0\n");
            continue;
        }

        count = 0;

        msb = &string[0];
        lsb = &string[size - 1];

        while (shrink(msb, lsb))
        {
            msb++;
            lsb--;
            count++;
        }

        printf("%d\n", size - 2 * count);
    }

    return 0;
}

int shrink(char *msb, char *lsb)
{
    return (((*msb == '0' && *lsb == '1') || (*msb == '1' && *lsb == '0')) && (msb < lsb));
}