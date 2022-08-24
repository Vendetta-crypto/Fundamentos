#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Hernandez Hernandez Erik Jose
int main()
{
    char texto[40];
    int tamanio = 0;
    printf("Introduce un texto: ");
    scanf("%s", &texto);
    tamanio = strlen(texto);

    printf("El tama%co del texto es : %d", 164, tamanio);
    return 0;
}
