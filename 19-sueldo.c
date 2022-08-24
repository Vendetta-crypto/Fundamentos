#include<stdlib.h>
#include<stdio.h>
//hernandez hernandez erik jose
main()
{
    int horas;
    float costoHora, sueldo;

    printf("Introduce las horas trabajadas: ");
    scanf("%d",&horas);

    printf("Introduce el costo por hora: ");
    scanf("%f",&costoHora);

    sueldo = horas*costoHora;

    printf("El sueldo es:%.2f pesos",sueldo);
    return 0;
}
