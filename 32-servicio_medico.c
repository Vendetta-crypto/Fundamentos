#include <stdio.h>
#include <stdlib.h>
// hernande hernandez erik jose
int main()
{
    int alumnos, carreraGrupo, acumuladorAlumno = 0, peso = 0, estatura = 0, acumuladorPeso = 0, acumuladorEstatura = 0;
    int promE, promP;
    int arrayPromE[12];
    int arrayPromP[12];
    printf("                SERVICIO MEDICO                   \n");
    printf("Nota: separa los datos ingresados con una coma ','\n");
    for (carreraGrupo = 1; carreraGrupo <= 12; carreraGrupo++)
    {
        printf("Grupo %d\n", carreraGrupo);
        printf("cuantos alumnos son: ");
        scanf("%d", &alumnos);
        do
        {
            printf("Intrese los datos del primer alumno: ");
            scanf("%d,%d", &peso, &estatura);
            acumuladorPeso += peso;
            acumuladorEstatura += estatura;
            acumuladorAlumno++;

        } while (acumuladorAlumno < alumnos);
        promE = acumuladorEstatura / alumnos;
        promP = acumuladorPeso / alumnos;
        // printf("%d", carreraGrupo);
        arrayPromE[carreraGrupo] = promE;
        arrayPromP[carreraGrupo] = promP;
        // printf("grupo: %d\n", carreraGrupo);
        //printf("estatura: %d\n", promE);
        //printf("peso: %d\n", promP);
        acumuladorEstatura = 0;
        acumuladorPeso = 0;
        acumuladorAlumno = 0;
    }
    fflush(stdin);

    // printf("%d", carreraGrupo);
    printf("_______________________________________________________________________________\n");
    for (carreraGrupo = 1; carreraGrupo <= 12; carreraGrupo++)
    {
       printf("|Grupo: %d\t| Promedio de peso de: %d\t| Promedio de estaturas de: %d|\n", carreraGrupo, arrayPromP[carreraGrupo], arrayPromE[carreraGrupo]);
    }
    printf("_______________________________________________________________________________");
    return 0;
}