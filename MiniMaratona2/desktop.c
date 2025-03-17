#include <stdio.h>

#define DESKTOP 15

int main()
{
    int test_cases, a1, a2, t1, t2, at, ar, ans;

    scanf("%d", &test_cases);

    for (int i = 0; i < test_cases; i++)
    {
        scanf("%d %d", &a1, &a2);

        at = a1 + 4 * a2;
        t2 = (a2 + 1) / 2;

        ar = t2 * DESKTOP - 4 * a2;

        t1 = (a1 - ar + DESKTOP - 1) / DESKTOP;

        ans = t2;

        if (t1 > 0)
            ans += t1;

        printf("%d\n", ans);
    }

    return 0;
}