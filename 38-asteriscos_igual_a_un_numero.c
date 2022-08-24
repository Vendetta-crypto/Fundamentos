#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int main()
{
    int numero, i;
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    if (numero == 5)
    {
        for (i = 0; i < 10; i++)
        {
            printf("*");
        }
    }
    return 0;
}
