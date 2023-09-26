#include <stdio.h>
#include <stdlib.h>

int main()
{
    float degreF;
    float degreC;

    printf("Entrez la température en °F: \n");
    scanf("%f", &degreF);

    degreC = (5*(degreF-32))/9;

    printf("La température en Celcius est: %f \n", degreC);


}
