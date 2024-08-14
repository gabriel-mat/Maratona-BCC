#include <stdio.h>
#include <string.h>

#define TAMANHO_MAX 100

int main()
{
    int qtd_palavras;
    char palavra[TAMANHO_MAX];

    scanf("%d", &qtd_palavras);

    for (int i = 0; i < qtd_palavras; i++)
    {
        scanf("%s", palavra);

        if (strlen(palavra) > 10)
        {
            printf("%c%d%c\n", palavra[0], strlen(palavra) - 2, palavra[strlen(palavra) - 1]);
        }
        else
        {
            printf("%s\n", palavra);
        }
    }

    return 0;
}