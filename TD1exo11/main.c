#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Prix du stationnement sur le parking \n");

    int HeureArrivee;
    int HeureDepart;
    int TempsEnHeure;
    int TempsEnQuart;
    int TempsEnMinute;
    float Prix;

    printf("Heure d'arrivée? \n");
    scanf("%d", &HeureArrivee);

    printf("Heure de départ? \n");
    scanf("%d", &HeureDepart);

    TempsEnHeure = HeureDepart-HeureArrivee ;
    printf("Temps en Heure: %d \n", TempsEnHeure);

    TempsEnMinute = TempsEnHeure*60;
    printf("Temps en minute: %d \n", TempsEnMinute);


    TempsEnQuart = TempsEnMinute/15;

    printf("Temps en quart d'heure: %d \n", TempsEnQuart);

    if (HeureArrivee>=7 && HeureArrivee<=19 && HeureArrivee<=HeureDepart && HeureDepart<=19)
    {
        if (TempsEnQuart>0 && TempsEnQuart<=4)
        {
            Prix = 0;
        }

        if (TempsEnQuart>4 && TempsEnQuart<=10)
        {
            Prix = 0 + (TempsEnQuart-4)*0.5;
        }

        if (TempsEnQuart>10 && TempsEnQuart<=12)
        {
            Prix = 0 + (TempsEnQuart-4)*0.5 + (TempsEnQuart-10)*0.4;
        }

        if (TempsEnQuart>12 && TempsEnQuart<=28)
        {
            Prix = 0 + (TempsEnQuart-4)*0.5 + (TempsEnQuart-10)*0.4 + (TempsEnQuart-12)*0.2;
        }

        if (TempsEnQuart>28)
        {
            Prix = 0 + (TempsEnQuart-4)*0.5 + (TempsEnQuart-10)*0.4 + (TempsEnQuart-12)*0.2 + (TempsEnQuart-28)*0.1;
        }

    }

    if (HeureArrivee>=19 && HeureArrivee<24 || HeureArrivee>=0 && HeureArrivee<=7)
    {
        if (TempsEnQuart==1)
        {
            Prix = 0.5;
        }

        if (TempsEnQuart==2)
        {
            Prix = 0.5 + 0.3;
        }

        if (TempsEnQuart==3)
        {
            Prix = 0.5 + 0.3 + 0.1;
        }

        if (TempsEnQuart==4)
        {
            Prix = 0.5 + 0.3 + 0.1 +0.1;
        }

        if (TempsEnQuart>4)
        {
            Prix = 0.5 + 0.3 + 0.1 +0.1 + 0;
        }
    }

    printf("Prix: %f \n", Prix);

    return 0;
}
