#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int main()
{
    int edad, suma, promedio=0, i;
    for (i = 0; i < 5; i++)
    {
        printf("Introduce la edad: ");
        scanf("%d", &edad);
        suma = suma + edad;
    }
    promedio = suma / 5.0;
    printf("El promedio de las 5 calificaciones es: %d", promedio);
    return 0 no funciona 
}
