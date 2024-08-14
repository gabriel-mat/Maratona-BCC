#include <stdio.h>

int main()
{
    int horseshoes[4], compra = 0;

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &horseshoes[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if ((horseshoes[i] == horseshoes[j]) && (i != j) && (horseshoes[j] != 0))
            {
                compra++;
                horseshoes[j] = 0;
            }
        }
    }

    printf("%d", compra);

    return 0;
}