#include <stdio.h>
#include <stdlib.h>

/*Informar a quantidade de quilometros rodados e a quantidade de litros abastecidos
E gerar a média de quilometragem por litro, conforme os valores inseridos pelo usuário */

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

//Criado por Lara Sousa
