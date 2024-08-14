#include <stdio.h>
#define TAMANHO_MAX 100

int main()
{
    int num, sequencia[TAMANHO_MAX], i = 0;
    char c;

    do
    {
        scanf("%d%c", &num, &c);

        sequencia[i] = num;

        i++;

    } while (c != '\n');

    for (int aux, m = 0; m < i; m++)
    {
        for (int n = 0; n < i - 1; n++)
        {
            if (sequencia[n + 1] < sequencia[n])
            {
                aux = sequencia[n + 1];
                sequencia[n + 1] = sequencia[n];
                sequencia[n] = aux;
            }
        }
    }

    for (int k = 0; k < i; k++)
    {
        if (k < i - 1)
        {
            printf("%d+", sequencia[k]);
        }
        else
        {
            printf("%d", sequencia[k]);
        }
    }

    return 0;
}