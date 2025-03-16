#include <stdio.h>

#define MAX_PLAYERS 100

int main()
{
    int c0, c1, dang, it;
    char players[MAX_PLAYERS + 1];

    scanf(" %100[^\n]", players);

    dang = it = c0 = c1 = 0;

    while (players[it] != '\0')
    {
        if (players[it] == '0')
        {
            c0++;
            c1 = 0;
        }
        else
        {
            c1++;
            c0 = 0;
        }

        if (c0 >= 7 || c1 >= 7)
            dang = 1;

        it++;
    }

    if (dang)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}