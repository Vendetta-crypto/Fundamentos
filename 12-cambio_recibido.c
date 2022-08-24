#include<stdlib.h>
#include<stdio.h>
//hernandez hernandez erik jose
main()
{
    int costoArticulo, dineroProporcionado, cambio;

    printf("Introduce el costo del articulo: ");
    scanf("%d",&costoArticulo);

    printf("Introduce el dinero dado: ");
    scanf("%d",&dineroProporcionado);

    cambio = dineroProporcionado-costoArticulo;

    printf("EL cambio es:%d",cambio);
    return 0;
}
