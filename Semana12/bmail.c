#include <stdio.h>

#define MAX_ROUTERS 200000

void solve_rec(int num, int routers[]);

int main()
{
    int num_routers;
    int routers[MAX_ROUTERS];

    scanf("%d", &num_routers);

    routers[0] = -1;

    for (int i = 1; i < num_routers; i++)
        scanf("%d", &routers[i]);

    solve_rec(num_routers, routers);

    return 0;
}

void solve_rec(int num, int routers[])
{
    if (num <= 0)
        return;

    solve_rec(routers[num - 1], routers);
    printf("%d ", num);
}