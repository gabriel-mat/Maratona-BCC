#include <stdio.h>
#define MAX_PEDRAS 100

int dist(int a, int b);
int maior(int fila[], int size);
int menor(int fila[], int size);

int main()
{
    int fila[MAX_PEDRAS];
    int num_testes, num_pedras, men, mai, inicio, fim, count;

    scanf("%d", &num_testes);

    for (int i = 0; i < num_testes; i++)
    {
        scanf("%d", &num_pedras);

        for (int j = 0; j < num_pedras; j++)
            scanf("%d", &fila[j]);

        men = menor(fila, num_pedras);
        mai = maior(fila, num_pedras);

        inicio = 0;
        fim = num_pedras - 1;

        count = 0;

        while ((inicio <= men && men <= fim) || (inicio <= mai && mai <= fim))
        {
            if ((inicio <= men && men <= fim) && (inicio <= mai && mai <= fim) && (dist(inicio, men) < dist(fim, mai) && dist(inicio, men) < dist(fim, men) || (dist(inicio, mai) < dist(fim, mai) && dist(inicio, mai) < dist(fim, men))))
                inicio++;
            else if ((inicio <= men && men <= fim) && !(inicio <= mai && mai <= fim) && (dist(inicio, men) < dist(fim, men)))
                inicio++;
            else if (!(inicio <= men && men <= fim) && (inicio <= mai && mai <= fim) && (dist(inicio, mai) < dist(fim, mai)))
                inicio++;
            else
                fim--;

            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}

int maior(int fila[], int size)
{
    int v;

    v = 0;
    for (int i = 1; i < size; i++)
        if (fila[i] > fila[v])
            v = i;

    return v;
}

int menor(int fila[], int size)
{
    int v;

    v = 0;
    for (int i = 1; i < size; i++)
        if (fila[i] < fila[v])
            v = i;

    return v;
}

int dist(int a, int b)
{
    if (a > b)
        return (a - b);
    return (b - a);
}