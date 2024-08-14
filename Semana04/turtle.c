#include <stdio.h>

int main()
{
    int num_testes, num_digitos, soma, digito;

    scanf("%d", &num_testes);

    for (int i = 0; i < num_testes; i++)
    {
        scanf("%d", &num_digitos);

        soma = 0;

        for (int j = 0; j < num_digitos; j++)
        {
            scanf("%d", &digito);

            if (digito < 0)
            {
                digito = -digito;
            }

            soma += digito;
        }

        printf("%d\n", soma);
    }

    return 0;
}