#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int main()
{
    float califica[10];
    int x;
    for (x = 0; x < 10; x++)
    {
        printf("Ingresa la calificacion: ");
        scanf("%f", &califica[x]);
    }
    printf("\n\n_____________calificaciones__________________\n");
    for (x = 0; x < 10; x++)
    {
        printf("%2.2f\n", califica[x]);
    }

    return 0;
}
