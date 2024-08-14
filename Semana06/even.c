#include <stdio.h>

#define TAMANHO_MAX 40

int main()
{
    int num_testes, num_elementos, num_pares, num_impares, array[TAMANHO_MAX];

    scanf("%d", &num_testes);

    for (int i = 0; i < num_testes; i++)
    {
        scanf("%d", &num_elementos);

        num_pares = num_impares = 0;

        for (int j = 0; j < num_elementos; j++)
        {
            scanf("%d", &array[j]);

            if (array[j] % 2 != j % 2)
            {
                if (array[j] % 2 == 1)
                {
                    num_impares++;
                }
                else
                {
                    num_pares++;
                }
            }
        }

        if (num_pares != num_impares)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", num_pares);
        }
    }

    return 0;
}