#include <stdio.h>
#include <stdlib.h>

int main()
{
    float degreC;
    float degreF;

    printf("Entrez la température en °C: \n");
    scanf("%f", &degreC);

    degreF = ((degreC*9)/5)+32;

    printf("La température en Fahreneit est: %f \n", degreF);
}
