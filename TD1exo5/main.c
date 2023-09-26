#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Salut toi ;) \n");

    int age;

    printf("Tu as quel âge?");
    scanf("%d", &age);

    if (age>=18)
        {
        printf("OMG t'es majeur !!!");
    }
}
