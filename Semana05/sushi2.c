#include <stdio.h>

int main()
{
    int qtd_sushis, maior_grupo = 0, anterior, atual, qtd_um = 0, qtd_dois = 0, alteracao = 0;

    scanf("%d", &qtd_sushis);

    scanf("%d", &anterior);

    if (anterior == 1)
    {
        qtd_um++;
    }
    else
    {
        qtd_dois++;
    }

    for (int i = 1; i < qtd_sushis; i++)
    {
        scanf("%d", &atual);

        if (atual == 1)
        {
            qtd_um++;
        }
        else
        {
            qtd_dois++;
        }

        if (atual != anterior)
        {
            alteracao++;
        }

        anterior = atual;
    }

    printf("%d", maior_grupo);
    return 0;
}