#include <stdio.h>
#include <stdlib.h>

int main()
{
    float li, km, ca;
    printf("informe quantos litros abasteceu.\n");
    scanf("%f", &li);
    printf("informe a quilometragem.\n");
    scanf("%f", &km);
    ca = km / li;

    printf("o consumo atual e de %0.2f km/l", ca);
    return 0;
}
