#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("J'espère que t'as la moyenne ! \n");

    float note;


    printf("T'as eu combien ? \n");
    scanf("%f", &note);


        if (note>10)
        {
            printf("Bravo t'as eu au dessus de la moyenne ! \n ");
        }

        if (note==10)
        {
            printf("T'as eu pile la moyenne .. \n");
        }
        if (note<10)
        {
            printf("T'as pas eu la moyenne ! \n");
        }
}
