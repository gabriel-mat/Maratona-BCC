#include <stdio.h>

int maior_sequencia(int tamanho, char sub_string[], char string[]);

int main()
{
    int num_testes, tamanho_a, tamanho_b;

    scanf("%d", &num_testes);

    for (int i = 0; i < num_testes; i++)
    {
        scanf("%d %d", &tamanho_a, &tamanho_b);

        char string_a[tamanho_a + 1], string_b[tamanho_b + 1];

        scanf(" %s", string_a);
        scanf(" %s", string_b);

        printf("%d\n", maior_sequencia(tamanho_b, string_a, string_b));
    }

    return 0;
}

int maior_sequencia(int tamanho, char sub_string[], char string[])
{
    int resultado = 0;

    for (int i = 0; i < tamanho; i++)
    {
        if (string[i] == sub_string[resultado])
        {
            resultado++;
        }
    }

    return resultado;
}