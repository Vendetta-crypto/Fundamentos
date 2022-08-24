/*nombre edad estatura*/
//hernandez hernandez erik jose
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
    int edad;
    char nombre[10], direccion[20],telefono[10];
   float estatura;

printf("Datos de una persona\n\n");

printf("Introduce tu nombre con apellidos: ");
scanf("%s",&nombre);

printf("Introduce tu edad: ");
scanf("%d",&edad);

printf("Introduce tu estatura: ");
scanf("%f",&estatura);

printf("Introduce tu direccion: ");
scanf("%s",&direccion);

printf("Introduce tu telefono: ");
scanf("%s",&telefono);

printf("El nombre es: %s\n",nombre);
printf("La edad es: %d\n",edad);
printf("La estatura es: %f\n",estatura);
printf("La direccion es: %s\n",direccion);
printf("Su telefono es: %s\n",telefono);

getch();
}
