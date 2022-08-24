/*estructura selectiva anidad*/
#include<stdlib.h>
#include<stdio.h>
//Hernandez Hernandez Erik Jose
main() {
    int numero1,numero2,numero3;

    printf("proporciona 3 numeros: ");
    scanf("%d,%d,%d", &numero1,&numero2,&numero3);
    if(numero1>numero2 && numero2>numero3)
        printf("el numero 1 es el mayor");
    else{
        if(numero2>numero3)
            printf("el numero 2 es el mayor");
        else{
            if(numero3>numero1)
            printf("el numero 3 es el mayor");
            else{
                printf("todos son iguales");
            }
        }
    }
return (0);
}
