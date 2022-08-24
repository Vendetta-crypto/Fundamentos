#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int main()
{
    char cadena[20];
    printf("Introduce la cadena: ");
    scanf("%s", &cadena);
    int contador = 0;

    while (cadena[contador] != 0)
    {
        contador++;
    }
    printf("La longitud de '%s' es: %d", cadena, contador);

    return 0;
}
