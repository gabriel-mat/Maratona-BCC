#include <stdio.h>

int main()
{
    int num, counter;

    scanf("%d", &num);

    if (num < 3 || !(num % 4 == 0 || num % 4 == 3))
    {
        printf("NO\n");
        return 0;
    }

    if (num % 4 == 3)
    {

        printf("YES\n");
        printf("%d\n", (num + 1) / 2);
        printf("1 2 ");
        counter = 4;
        while (counter <= num)
        {
            printf("%d ", counter);
            counter += 3;

            if (counter > num)
                break;

            printf("%d ", counter);
            counter++;
        }

        printf("\n%d\n", (num - 1) / 2);
        printf("3 ");
        counter = 5;
        while (counter < num)
        {
            printf("%d ", counter);
            counter++;

            if (counter > num)
                break;

            printf("%d ", counter);
            counter += 3;
        }

        return 0;
    }

    printf("YES\n");
    printf("%d\n", num / 2);
    counter = 1;
    while (counter <= num)
    {
        printf("%d ", counter);
        counter += 3;

        if (counter > num)
            break;

        printf("%d ", counter);
        counter++;
    }

    printf("\n%d\n", num / 2);
    counter = 2;
    while (counter < num)
    {
        printf("%d ", counter);
        counter++;

        if (counter > num)
            break;

        printf("%d ", counter);
        counter += 3;
    }

    return 0;
}