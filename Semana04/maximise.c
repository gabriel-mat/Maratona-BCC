#include <stdio.h>

#define TAMANHO_MAXIMO 100

void ordenar(int vetor[], int tamanho);

int minimo(int num1, int num2);

int main()
{
    int num_testes, num_digitos, score, numeros[TAMANHO_MAXIMO];

    scanf("%d", &num_testes);

    for (int i = 0; i < num_testes; i++)
    {
        scanf("%d", &num_digitos);
        num_digitos *= 2;

        for (int j = 0; j < num_digitos; j++)
        {
            scanf("%d", &numeros[j]);
        }

        ordenar(numeros, num_digitos);

        score = 0;

        for (int j = 0; j < num_digitos; j += 2)
        {
            score += minimo(numeros[j], numeros[j + 1]);
        }

        printf("%d\n", score);
    }

    return 0;
}

void ordenar(int vetor[], int tamanho)
{
    int auxiliar, mudanca;

    for (int i = 0; i < tamanho; i++)
    {
        mudanca = 0;

        for (int j = 0; j < tamanho - 1; j++)
        {
            if (vetor[j + 1] < vetor[j])
            {
                auxiliar = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = auxiliar;

                mudanca = 1;
            }
        }

        if (mudanca == 0)
        {
            break;
        }
    }
}

int minimo(int num1, int num2)
{
    if (num1 <= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}