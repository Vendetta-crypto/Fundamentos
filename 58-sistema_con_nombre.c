#include <stdio.h>
#include <stdlib.h>
// hernande hernandez erik jose
int main()
{
    int alumnos, carreraGrupo, acumuladorAlumno = 0, peso = 0, estatura = 0, acumuladorPeso = 0, acumuladorEstatura = 0;
    int promCalificacion, promP,numeroCarrera, calificacion=0,acumuladorCalifiacion=0;
    char nombreAlu;
    printf("                Escuela                   \n");
    printf("introduce el numero de carreras: ");
    scanf("%d",&numeroCarrera);
    int arrayPromCalificacion[numeroCarrera];
    int arrayPromedioFinal[alumnos],numAlu;
    char nombres;

    for (carreraGrupo = 1; carreraGrupo <= numeroCarrera; carreraGrupo++)
    {
        printf("Grupo %d\n", carreraGrupo);
        printf("cuantos alumnos son: ");
        scanf("%d", &alumnos);
        //char nombres;
        do
        {
            printf("Intrese los datos del primer alumno: ");
            //scanf("%s",&nombres);
            for ( int i = 0; i < 3; i++)
            {
                printf("Ingresa la calificacion: ");
            scanf("%d",&calificacion);
            acumuladorCalifiacion+=calificacion;
            }

            acumuladorAlumno++;

        } while (acumuladorAlumno < alumnos);
        promCalificacion = acumuladorCalifiacion / 3;
        // printf("%d", carreraGrupo);
        arrayPromCalificacion[carreraGrupo] = promCalificacion;

        arrayPromedioFinal[carreraGrupo] =promCalificacion ;
        // printf("grupo: %d\n", carreraGrupo);
        //printf("estatura: %d\n", promE);
        //printf("peso: %d\n", promP);
        acumuladorCalifiacion=0;
        acumuladorAlumno = 0;
    }
    fflush(stdin);

    // printf("%d", carreraGrupo);
    printf("_______________________________________________________________________________\n");
    
    for (carreraGrupo = 1; carreraGrupo <= numeroCarrera; carreraGrupo++)
    {
       printf("|Grupo: %d\t| Promedio de calificacion es: %d\n\t| Nombre: %s|\n", carreraGrupo, arrayPromCalificacion[carreraGrupo],nombres);
    }
    for (carreraGrupo = 1; carreraGrupo <= alumnos; carreraGrupo++)
    {
        printf("Promedio de calificacion: %d\n",arrayPromCalificacion[carreraGrupo]);
    }
    
    printf("_______________________________________________________________________________");
    return 0;
no funciona 