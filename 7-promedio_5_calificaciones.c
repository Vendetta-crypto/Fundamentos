//Hernandez Hernandez Erik Jose
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int p,cal,cal2,cal3,cal4,cal5;

main(){

printf("Promedio de cinco calificaciones\n\n");

printf("Introduce la primer calificacion: ");
scanf("%d",&cal);

printf("Introduce la segunda calificacion: ");
scanf("%d",&cal2);

printf("Introduce la tercera calificacion: ");
scanf("%d",&cal3);

printf("Introduce la cuarta calificacion: ");
scanf("%d",&cal4);

printf("Introduce la quinta calificacion: ");
scanf("%d",&cal5);

p = (cal + cal2 + cal3 + cal4 + cal5)/5;

printf("EL promedio de las calificaciones es: %d",p);

getch();


}
