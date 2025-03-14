#include <stdio.h>

#define MAX_SIZE 150000

int main()
{
    int fence[MAX_SIZE];
    int size, hole, ini, fim, min_ini;
    long long int count, min_count;

    scanf("%d %d", &size, &hole);

    for (int i = 0; i < size; i++)
        scanf("%d", &fence[i]);

    count = 0;

    for (int i = 0; i < hole; i++)
        count += fence[i];

    min_count = count;

    ini = 1;
    fim = hole;
    min_ini = 0;

    while (fim < size)
    {
        count -= fence[ini - 1];
        count += fence[fim];

        if (count < min_count)
        {
            min_count = count;
            min_ini = ini;
        }

        ini++;
        fim++;
    }

    printf("%d\n", min_ini + 1);

    return 0;
}