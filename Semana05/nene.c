#include <stdio.h>

void recebendo_sequencia(int tamanho, int sequencia[]);

int numero_ganhadores(int num_jogadores, int sequencia[], int tamanho_sequencia);

int main()
{
    int num_testes_geral, num_jogadores, num_testes_n, tamanho_a;

    scanf("%d", &num_testes_geral);

    for (int i = 0; i < num_testes_geral; i++)
    {
        scanf("%d %d", &tamanho_a, &num_testes_n);

        int sequencia[tamanho_a], n_testes[num_testes_n];

        recebendo_sequencia(tamanho_a, sequencia);
        recebendo_sequencia(num_testes_n, n_testes);

        int sequencia_auxiliar[tamanho_a];

        for (int k = 0; k < tamanho_a; k++)
        {
            sequencia_auxiliar[k] = sequencia[k];
        }

        for (int j = 0; j < num_testes_n; j++)
        {
            printf("%d ", numero_ganhadores(n_testes[j], sequencia, tamanho_a));
        }
        printf("\n");
    }

    return 0;
}

void recebendo_sequencia(int tamanho, int sequencia[])
{
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &sequencia[i]);
    }
}

int numero_ganhadores(int num_jogadores, int sequencia[], int tamanho_sequencia)
{
    int eliminados = 0, auxiliar = num_jogadores;

    for (int i = 0; i < tamanho_sequencia; i++)
    {
        if (sequencia[i] <= auxiliar)
        {
            auxiliar--;
            eliminados++;
        }
    }

    return num_jogadores - eliminados;
}