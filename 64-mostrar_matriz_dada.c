/*REALIZAR UN PROGRAMA QUE MUESTRE LA SIGUENTE MATRIZ
 9 1 2
 3 4 5
 6 7 8
*/
#include <stdio.h>
#include <stdlib.h>

int mat1[3][3] = {9, 1, 2, 3, 4, 5, 6, 7, 8}, i, j;

main()
{                            // imprimir la matriz
    for (i = 0; i <= 2; i++) // filas
    {
        for (j = 0; j <= 2; j++) // columnas
        {
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    system("pause");
}