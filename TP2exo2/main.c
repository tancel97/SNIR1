#include <stdio.h>
#include <stdlib.h>
#include <senseHat.h>
#include <unistd.h>

int main()
{
    printf("Bonjour ! \n");
    InitialiserLeds();
    int i,j;


    while(1){
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
                Allumer(i,j,ORANGE);
                Allumer(j,i,ORANGE);


                }

        }
        usleep(100000);
        Effacer();

    }

    return 0;
}
