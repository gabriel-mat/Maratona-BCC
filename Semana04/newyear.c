#include <stdio.h>

int main()
{
    int distancia_1 = 0, distancia_2 = 0, distancia_3 = 0, menor_distancia, distancia_auxiliar, num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    // Distancia até a casa 1
    distancia_auxiliar = num2 - num1;
    if (distancia_auxiliar < 0)
    {
        distancia_auxiliar = -distancia_auxiliar;
    }
    distancia_1 += distancia_auxiliar;
    distancia_auxiliar = num3 - num1;
    if (distancia_auxiliar < 0)
    {
        distancia_auxiliar = -distancia_auxiliar;
    }
    distancia_1 += distancia_auxiliar;

    menor_distancia = distancia_1;

    // Distancia até a casa 2
    distancia_auxiliar = num1 - num2;
    if (distancia_auxiliar < 0)
    {
        distancia_auxiliar = -distancia_auxiliar;
    }
    distancia_2 += distancia_auxiliar;
    distancia_auxiliar = num3 - num2;
    if (distancia_auxiliar < 0)
    {
        distancia_auxiliar = -distancia_auxiliar;
    }
    distancia_2 += distancia_auxiliar;

    if (distancia_2 < menor_distancia)
    {
        menor_distancia = distancia_2;
    }
    
    // Distancia até a casa 3
    distancia_auxiliar = num1 - num3;
    if (distancia_auxiliar < 0)
    {
        distancia_auxiliar = -distancia_auxiliar;
    }
    distancia_3 += distancia_auxiliar;
    distancia_auxiliar = num2 - num3;
    if (distancia_auxiliar < 0)
    {
        distancia_auxiliar = -distancia_auxiliar;
    }
    distancia_3 += distancia_auxiliar;

    if (distancia_3 < menor_distancia)
    {
        menor_distancia = distancia_3;
    }

    printf("%d", menor_distancia);
    
    return 0;
}