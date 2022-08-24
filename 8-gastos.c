//Hernandez Hernandez Erik Jose
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char respuesta;
int gastos,total=0;

main(){

    printf("Gastos al ir a la universidad\n\n");


    do {
        printf("Introduce los gastos: ");
        scanf("%d",&gastos);
        total+=gastos;

        printf("Tienes otros gastos (s/n): ");
        fflush(stdin);
        scanf("%c",respuesta);

        }
            while(respuesta!='n');
            printf("Los gastos son: %d",total);
            system("pause");
}
