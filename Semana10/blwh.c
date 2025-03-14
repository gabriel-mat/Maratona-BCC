#include <stdio.h>

#define MAX_SIZE 200000

int main()
{
    int testes, inicio, fim, whites, size, meta, count, ans;
    char string[MAX_SIZE + 1];

    scanf("%d", &testes);

    for (int i = 0; i < testes; i++)
    {
        scanf("%d %d", &size, &meta);

        scanf(" %200000[^\n]", string);

        count = 0;

        for (int j = 0; j < meta; j++)
            if (string[j] == 'W')
                count++;

        ans = count;

        inicio = 1;
        fim = meta;

        while (fim < size)
        {
            if (string[inicio - 1] == 'W')
                count--;
            if (string[fim] == 'W')
                count++;

            if (count < ans)
                ans = count;

            inicio++;
            fim++;
        }

        printf("%d\n", ans);
    }

    return 0;
}