
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
float sueldo_prom;
int mayor = 0, menor = 0;

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
    printf("los datos del empleado son\n\n");
    for (i = 0; i < 3; i++)
    {

        printf("numero empleado: %d\n", emplea[i].ne);
        printf("nombre del empleado: %s\n", emplea[i].nom);
        printf("edad del empleado: %d\n", emplea[i].edad);
        printf("departamento del empleado: %s\n", emplea[i].dep);
        printf("sueldo del empleado: %f\n", emplea[i].sue1);
        printf("==============================================\n");
        sueldo_prom = sueldo_prom + emplea[i].sue1; // acumulador
        if (mayor > emplea[i].sue1)
        {
            mayor = mayor;
        }
        else
        {
            mayor = emplea[i].sue1;
            printf("\n\n el sueldo promedio %0.2f", sueldo_prom / 3);

            
        }
    }
    system("pause");
}