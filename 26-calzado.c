#include<stdlib.h>
#include<stdio.h>
//hernandez hernandez erik jose
main()
{
    int zapatos,sueldoConExtra,extra,SinExtra,sueldoSinExtra,sueldo;
    printf("Introduce los zapatos empacados: ");
    scanf("%d",&zapatos);

    if(zapatos>500){
            //si los zapatos son mayores a 500 se hace una resta de los zapatos menos 500
       extra = zapatos - 500;
            //el resultado se multiplica por 30 que son los pares extra
       sueldoConExtra = extra * 30;
            /*para sacar los pares que se encuentran dentro del rengo de 500 se hace la resta
            de los zapatos menos el extra*/
       SinExtra = zapatos - extra;
            //depsues se multiplica por 20 los pares que no son extra
       sueldoSinExtra =  SinExtra * 20;
            //al final solo se suman los sueldos con extra y sin extra
       sueldo = sueldoSinExtra + sueldoConExtra;
       printf("EL sueldo es:%d",sueldo);

    }else
    {
        if(zapatos<500){
            sueldo = zapatos * 20;
            printf("El sueldo es:%d",sueldo);
        }
    }
    return 0;
}
