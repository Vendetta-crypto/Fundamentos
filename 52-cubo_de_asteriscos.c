#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int j, i, num;
int main()
{
    printf("introduce valor del lado: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) // filas
    {
        for (j = 1; j <= num; j++) // columnas
        {
            printf("*  ");
        }
        printf("\n");
    }

    return 0;
}
