/*realizar un programa que capture 5 datos de un empleado considere los siguientes datos:
ne,nom,dep,edad,dep,suel*/

#include <stdio.h>
#include <stdlib.h>

struct empleado
{

    int ne;
    char nom[20];
    int edad;
    char dep[30];
    float sue1;
};

main()
{
    struct empleado emplea;
    printf("introduce numero empleado: ");
    scanf("%d", &emplea.ne);

    printf("introduce nombre empleado: ");
    scanf("%s", &emplea.nom);

    printf("introduce edad empleado: ");
    scanf("%d", &emplea.edad);

    printf("introduce departamento empleado:");
    scanf("%s", &emplea.dep);

    printf("introduce sueldo empleado: ");
    scanf("%f", &emplea.sue1);

    printf("los datos del empleado son:\n");
    printf("numero empleado: %d\n", emplea.ne);
    printf("nombre del empleado:%s\n", emplea.nom);
    printf("edad del empleado: %d\n", emplea.edad);
    printf("departamento del empleado: %s\n", emplea.dep);
    printf("sueldo del empleado: %0.2f\n", emplea.sue1);
    system("pause");
}
