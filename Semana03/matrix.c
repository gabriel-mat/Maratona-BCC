#include <stdio.h>

int main()
{
    int matriz[5][5], linha_um, coluna_um, dif_linha, dif_coluna;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] == 1)
            {
                linha_um = i;
                coluna_um = j;
            }
        }
    }

    dif_linha = 2 - linha_um;
    if (dif_linha < 0)
    {
        dif_linha = -dif_linha;
    }

    dif_coluna = 2 - coluna_um;
    if (dif_coluna < 0)
    {
        dif_coluna = -dif_coluna;
    }

    printf("%d", dif_linha + dif_coluna);
    
    return 0;
}