#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int main()
{

    printf("Suma de dos matrices 3x3");
    int matriz[3][3], matriz2[3][3];
    int i, j, resultado[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Introduce los numeros:(%d,%d) \n",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Introduce los numeros: \n");
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            resultado[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }
    printf("La suma es: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d   ", resultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}
