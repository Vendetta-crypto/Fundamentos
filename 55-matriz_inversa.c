#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int main()
{
    int a, b, c, d, determinante, inversa, sigoElemntoB, sigoElemntoC;
    printf("Ingresa los elemntos a y b: ");
    scanf("%d,%d", &a, &b);
    printf("INresa los lementos c y d: ");
    scanf("%d,%d", &c, &d);
    determinante = (a * d) - (c * b);
    if (determinante == 0)
    {
        printf("No es invertible");
    }
    else
    {
        sigoElemntoB = -b;
        sigoElemntoC = -c;
        printf("La inversa es:\n");
        printf("1/%d", determinante);
        printf("(%d,%d)\n", d, sigoElemntoB);
        printf("    (%d,%d)\n", sigoElemntoC, a);
        printf("Como resultado da: \n");
        printf("(%d/%d,%d/%d)\n", d, determinante, sigoElemntoB, determinante);
        printf("(%d/%d,%d/%d)", sigoElemntoC, determinante, a, determinante);
    }
    return 0;
}
