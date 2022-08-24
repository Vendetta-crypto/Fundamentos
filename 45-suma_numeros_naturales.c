#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int j = 1, suma;
int main()
{
    while (j <= 10)
    {
        suma = suma + j;
        j++;
    }
    printf("La sumatoria es: %d", suma);
    return 0;
}
