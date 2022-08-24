/*tres empleados*/

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
    struct empleado emplea[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("introduce numero empleado: ");
        scanf("%d", &emplea[i].ne);

        printf("introduce nombre empleado: ");
        scanf("%s", &emplea[i].nom);

        printf("introduce edad empleado: ");
        scanf("%d", &emplea[i].edad);

        printf("introduce departamento empleado: ");
        scanf("%s", &emplea[i].dep);

        printf("introduce sueldo empleado: ");
        scanf("%f", &emplea[i].sue1);

    }
    printf("los datos del empleado son:\n");
    for (i = 0; i < 3; i++)
    {

        printf("numero empleado: %d\n", emplea[i].ne);
        printf("nombre del empleado:%s\n", emplea[i].nom);
        printf("edad del empleado: %d\n", emplea[i].edad);
        printf("departamento del empleado: %s\n", emplea[i].dep);
        printf("sueldo del empleado: %0.2f\n", emplea[i].sue1);
        printf("==============================================\n");
    }
    return 0;
}