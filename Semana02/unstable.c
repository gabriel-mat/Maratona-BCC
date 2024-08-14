#include <stdio.h>

int main()
{
    int num_testes, tamanho, soma, nao_negativos;
    float media;

    scanf("%d", &num_testes);

    for (int i = 0; i < num_testes; i++)
    {
        scanf("%d %d", &tamanho, &soma);

        if (tamanho <= 2)
        {
            printf("%d\n", (tamanho - 1) * soma);
        }
        else
        {
            printf("%d\n", 2 * soma);
        }
    }

    return 0;
}