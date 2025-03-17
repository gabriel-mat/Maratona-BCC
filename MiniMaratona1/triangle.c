#include <stdio.h>
#include <stdlib.h>

#define MAX_SEGMENTS 100000

int compare(const void *a, const void *b);

int main()
{
    int num_segments, ans;
    int segments[MAX_SEGMENTS];

    scanf("%d", &num_segments);

    for (int i = 0; i < num_segments; i++)
        scanf("%d", &segments[i]);

    qsort(segments, num_segments, sizeof(int), compare);

    ans = 0;

    for (int i = 2; i < num_segments; i++)
    {
        if (segments[i] < segments[i - 1] + segments[i - 2])
        {
            ans = 1;
            break;
        }
    }

    if (ans)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}