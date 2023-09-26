#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello man!\n");

    int jour;
    int heure;
    int minute;
    int MINUTES;

    printf("Entrez le nombre de jours: \n");
    scanf("%d", &jour);

    printf("Entrez le nombre d'heures: \n");
    scanf("%d", &heure);

    printf("Entrez le nombre de minutes: \n");
    scanf("%d", &minute);

    MINUTES = (jour*24*60) + (heure*60) + minute ;

    printf("Le temps en minute de la période entrée est %d", MINUTES);


}
