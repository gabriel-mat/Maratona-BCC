#include <stdio.h>

int *fst(int *array);
int *snd(int *array);
int *trd(int *array);
int fim(int *array);
int todos_pares(int *array);

int main()
{
    int players[3], test_cases, count;
    int *first, *second;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &players[j]);

        count = 0;

        while (1)
        {
            first = fst(players);
            second = snd(players);

            if (*first == 0 || *second == 0)
                break;

            *first = *(first)-1;
            *second = *(second)-1;

            count++;
        }

        if (!fim(players) && !todos_pares(players))
            printf("-1\n");
        else
            printf("%d\n", count);
    }

    return 0;
}

int *fst(int *array)
{
    int *maior;

    maior = array;

    for (int i = 1; i < 3; i++)
        if (array[i] > *maior)
            maior = &array[i];

    return maior;
}

int *snd(int *array)
{
    int *maior, *meio, *menor;

    maior = fst(array);
    menor = trd(array);

    for (int i = 0; i < 3; i++)
        if (&array[i] != menor && &array[i] != maior)
            meio = &array[i];

    return meio;
}

int *trd(int *array)
{
    int *menor;

    menor = array;

    for (int i = 1; i < 3; i++)
        if (array[i] < *menor)
            menor = &array[i];

    return menor;
}

int fim(int *array)
{
    for (int i = 0; i < 3; i++)
        if (array[i] != 0)
            return 0;
    return 1;
}

int todos_pares(int *array)
{
    for (int i = 0; i < 3; i++)
        if (array[i] % 2)
            return 0;
    return 1;
}