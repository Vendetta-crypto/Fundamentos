#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int i, j, num;
int main()
{
    printf("introduce un numero: ");
    scanf("%d", &num);
    if (num == 5)
    {
        for (i = 1; i <= num; i++) // filas
        {
            for (j = 1; j <= i; j++) // columnas
            {
                printf("%d", j);
            }
            printf("\n");
        }
        return 0;
    }
}
