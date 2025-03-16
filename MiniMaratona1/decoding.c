#include <stdio.h>

#define MAX_SIZE 2000

int main()
{
    int size, iterador, count;
    char string[MAX_SIZE + 1], ans[MAX_SIZE + 1];

    scanf("%d", &size);
    scanf(" %2000[^\n]", string);

    iterador = (size - 1) / 2;
    ans[iterador] = string[0];
    count = 1;

    while (count < size)
    {
        if (size % 2)
        {
            iterador -= count;

            if (iterador >= 0 && iterador < size)
                ans[iterador] = string[count];

            iterador = size - 1 - iterador;

            if (iterador >= 0 && iterador < size)
                ans[iterador] = string[count + 1];

            count += 2;
        }
        else
        {
            iterador -= count;

            if (iterador >= 0 && iterador < size)
                ans[iterador] = string[count + 1];

            iterador = ((size - 1) / 2) + (count / 2) + 1;

            if (iterador >= 0 && iterador < size)
                ans[iterador] = string[count];

            count += 2;
        }
    }

    ans[size] = '\0';
    printf("%s\n", ans);

    return 0;
}