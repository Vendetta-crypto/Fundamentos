#include<stdio.h>
#include<stdlib.h>
//Hernandez Hernandez Erik Jose
main()
{
    int sueldo;
    float sueldoConAumento,aumento;

    printf("Introduce tu sueldo: ");
    scanf("%d",&sueldo) ;

    if (sueldo<1500){
        aumento = sueldo*0.10;
        sueldoConAumento =  sueldo + aumento;
        printf("EL aumento es del 10 porciento por lo tanto tu sueldo queda de:%.2f",sueldoConAumento);
    }else
    {
        printf("NO eres acreedor a un aumento");
    }
    return 0;
}
