#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1;
    float n2;
    float resultatDivision;

    printf("Donnez moi le nombre 1:    ");
    scanf("%f",&n1);

    printf("Donnez moi le nombre 2:    ");
    scanf("%f",&n2);

    resultatDivision = n1 / n2;
    printf("le résultat de la division est %f \n",resultatDivision);
}
