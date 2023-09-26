#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello guy!\n");

    float masse;
    float taille;
    float IMC;

    printf("Entrez votre masse en kg: \n");
    scanf("%f", &masse);

    printf("Entrez votre taille en m: \n");
    scanf("%f", &taille);

    IMC = (masse)/(taille*taille);

    printf("Votre IMC vaut: %f \n", IMC);
}
