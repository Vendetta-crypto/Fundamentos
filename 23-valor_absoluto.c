#include<stdio.h>
#include<stdlib.h>
//Hernandez Hernandez Erik Jose
main()
{
    int numero,valor;

    printf("Introduce un numero cualquiera sea negativo o no: " );
    scanf("%d",&numero);

    if(numero<0){
        valor = numero *-1;
        printf("El valor absoluto es:%d", valor);
    }else
    {
        printf("EL valor absoluto es:%d", numero);
    }
    return 0;
}
