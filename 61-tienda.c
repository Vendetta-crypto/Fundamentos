#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose

int main()
{
    int codigo;
    printf("Cereal-1096\n");
    printf("Aceite-16841\n");
    printf("Ingresa el codigo de producto: ");
    scanf("%d",&codigo);
    switch (codigo)
    {
    case 1096:
    printf("Precio: $36\n");
    printf("Descripcion: Nestle");
        break;
    case 16841: 
    printf("Precio: $47");
    printf("Descripcion: Nutrioli");
        break;

    default:
    printf("Codigo no valido");
        break;
    }

    return -1;
}
