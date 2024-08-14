#include <stdio.h>

int main()
{
    int num_testes, num_movimentos, num_cubos;

    scanf("%d", &num_testes);

    for (int i = 0; i < num_testes; i++)
    {
        scanf("%d %d", &num_movimentos, &num_cubos);

        if (num_cubos > num_movimentos)
        {
            printf("No\n");
            continue;
        }

        if ((num_movimentos - num_cubos) % 2 == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}