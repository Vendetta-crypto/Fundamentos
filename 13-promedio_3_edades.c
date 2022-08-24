#include<stdio.h>
#include<stdlib.h>

main()
{
    int edad1,edad2,edad3,promedio;

    printf("Introduce las 3 edades separandolas con una coma: ");
    scanf("%d,%d,%d",&edad1,&edad2,&edad3);

    promedio = (edad1+edad2+edad3)/3;

    printf("EL promedio de las edades es:%d ",promedio);

   system ("pause");
}
