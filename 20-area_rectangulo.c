#include<stdio.h>
#include<stdlib.h>
//Hernandez Hernandez Erik Jose
main()
{
    int base,altura, areaRectangulo;

    printf("Introduce la altura: ");
    scanf("%d",&altura);
    printf("Introduce la base: ");
    scanf("%d",&base);

    areaRectangulo = base*altura;

    printf("El area es:%d",areaRectangulo);
    return 0;
}
