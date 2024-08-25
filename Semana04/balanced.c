#include <stdio.h>
#include <stdlib.h>

#define NUMERO_MAX 200000

int comparacao(void *n1, void *n2);
int maior_grupo(int vetor[], int tamanho, int diferenca);

int main()
{
    int num_testes, num_digitos, dif_maxima, numeros[NUMERO_MAX];

    scanf("%d", &num_testes);

    for (int i = 0; i < num_testes; i++)
    {
        scanf("%d %d", &num_digitos, &dif_maxima);

        for (int j = 0; j < num_digitos; j++)
        {
            scanf("%d", &numeros[j]);
        }

        qsort(numeros, num_digitos, sizeof(int), comparacao);

        printf("%d\n", num_digitos - maior_grupo(numeros, num_digitos, dif_maxima));
    }

    return 0;
}

int comparacao(void *n1, void *n2)
{
    // converte void* em int* e depois acessa seu valor
    return (*(int *)n1 - *(int *)n2);
}

// retorna o tamanho do maior subgrupo que atenda às regras
int maior_grupo(int vetor[], int tamanho, int diferenca)
{
    int maior_subgrupo = 0, auxiliar_maior = 0;

    for (int i = 0; i < tamanho - 1; i++)
    {
        if (vetor[i + 1] - vetor[i] <= diferenca)
        {
            auxiliar_maior++;

            if (auxiliar_maior > maior_subgrupo)
            {
                maior_subgrupo = auxiliar_maior;
            }
        }
        else
        {
            auxiliar_maior = 0;
        }
    }

    return maior_subgrupo + 1;
}
