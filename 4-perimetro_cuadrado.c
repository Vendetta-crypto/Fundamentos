#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int L,R;// variables locales

main(){

printf("Perimetro de un cuadrado\n\n");

printf("Introduce el lado del cuadrado: ");
scanf("%d",&L);

R=L*4;

printf("El perimetro es: %d",R);
getch();

}

