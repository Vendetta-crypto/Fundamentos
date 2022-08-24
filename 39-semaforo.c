#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int main()
{
    int opcion;
    printf("Semaforo\n");
    printf("1-Verde\n");
    printf("2-Amarillo\n");
    printf("3-Rojo\n");
    printf("Elige un color: ");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        printf("Siga en marcha");
        break;
    case 2:
        printf("Baje la velocidad");
        break;
    case 3:
        printf("Alto total");

    default:
        printf("No existe esa opcion");
        break;
    }
    return 0;
}
