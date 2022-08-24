//Hernandez Hernandez Erik Jose
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float radio,areaCirculo;

main(){

printf("Area de un circulo\n\n");

printf("Introduce el radio: ");
scanf("%f",&radio);

areaCirculo = 3.1416*radio*radio;

printf("El area del circulo es: %f",areaCirculo);
getch();
}
