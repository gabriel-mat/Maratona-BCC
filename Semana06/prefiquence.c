#include <stdio.h>
#include <string.h>

int maior_subgrupo(char string_menor[], char string_maior[], int tamanho_max);

void recebendo_strings(int tamanho, char string[]);

int main()
{
    int num_testes, tamanho_a, tamanho_b, maior_tamanho;

    scanf("%d", &num_testes);

    for (int i = 0; i < num_testes; i++)
    {
        scanf("%d %d", &tamanho_a, &tamanho_b);

        char string_a[tamanho_a + 1], string_b[tamanho_b + 1];

        if (tamanho_a > tamanho_b)
        {
            maior_tamanho = tamanho_a;
        }
        else
        {
            maior_tamanho = tamanho_b;
        }

        recebendo_strings(tamanho_a, string_a);
        recebendo_strings(tamanho_b, string_b);

        printf("%d\n", maior_subgrupo(string_a, string_b, maior_tamanho));
    }
    return 0;
}

int maior_subgrupo(char string_menor[], char string_maior[], int tamanho_max)
{
    int resultado = 0;
    char auxiliar[tamanho_max];

    auxiliar[0] = string_menor[0];

    while (1)
    {
        if (resultado == tamanho_max - 1)
        {
            return (resultado + 1);
        }
        else if (strstr(string_maior, auxiliar) != NULL)
        {
            auxiliar[++resultado] = string_menor[resultado];
        }
        else
        {
            return resultado;
        }
    }
}

void recebendo_strings(int tamanho, char string[])
{
    scanf(" ");

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%c", &string[i]);
    }

    string[tamanho] = '\0';
}