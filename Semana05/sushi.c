#include <stdio.h>

int main()
{
    int qtd_sushi, maior_conjunto = 0, alteracao = 0, anterior, qtd_um = 0, qtd_dois = 0;

    scanf("%d", &qtd_sushi);

    int sushis[qtd_sushi];

    for (int i = 0; i < qtd_sushi; i++)
    {
        scanf("%d", &sushis[i]);
    }

    anterior = sushis[0];

    if (anterior == 1)
    {
        qtd_um++;
    }
    else
    {
        qtd_dois++;
    }

    for (int i = 1; i < qtd_sushi; i++)
    {
        if (sushis[i] == 1)
        {
            qtd_um++;
        }
        else
        {
            qtd_dois++;
        }

        if (sushis[i] != anterior)
        {
            alteracao++;
        }

        if (alteracao == 2 || i == (qtd_sushi - 1))
        {
            if (qtd_um > qtd_dois)
            {
                if (qtd_dois > maior_conjunto)
                {
                    maior_conjunto = qtd_dois;
                }
            }
            else
            {
                if (qtd_um > maior_conjunto)
                {
                    maior_conjunto = qtd_um;
                }
            }

            qtd_um = qtd_dois = alteracao = 0;

            if (sushis[i] == 1)
            {
                qtd_um++;
            }
            else
            {
                qtd_dois++;
            }
        }

        anterior = sushis[i];
    }

    printf("%d", 2 * maior_conjunto);

    return 0;
}