#include <stdio.h>

int main()
{
    int preco, moeda, num = 1;

    scanf("%d %d", &preco, &moeda);

    while (1)
    {
        if (preco * num % 10 == moeda || preco * num % 10 == 0)
        {
            printf("%d", num);
            break;
        }
        else
        {
            num++;
        }
    }

    return 0;
}