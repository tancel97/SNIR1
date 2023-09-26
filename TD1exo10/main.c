#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Votre polynôme de degré deux est de la forme ax²+bx+c=0 \n");

    int a;
    int b;
    int c;
    int d;

    printf("Valeur de a? \n");
    scanf("%d", &a);

    printf("Valeur de b? \n");
    scanf("%d", &b);

    printf("Valeur de c? \n");
    scanf("%d", &c);

    d = b*b - 4*a*c;

    if (d>=0)
    {
        printf("Il existe deux solutions réelles dans R \n");
    }
    return 0;
}
