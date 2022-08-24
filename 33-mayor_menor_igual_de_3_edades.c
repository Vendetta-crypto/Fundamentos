//hernandez hernandez erik jose
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int edad1,edad2,edad3;
    printf("introduce las 3 edades: ");
    scanf("%d,%d,%d",&edad1,&edad2,&edad3);

    if (edad1>edad2 && edad2>edad3)
        printf("La edad mayor es la edad 1\n");
        else{
            if (edad2>edad3)
            printf("La edad mayor es la edad 2\n");
            else {
                if(edad3>edad1)
                printf("La edad mayor es la edad 3\n");
            }
            if(edad1<edad2 && edad2<edad3)
            printf("La edad menor es la edad 1\n");
            else {
                if(edad2<edad3)
                printf("La edad manor es la edad 2\n");
                else {
                    if(edad3<edad1)
                    printf("La edad menor es la edad 3\n");
                    else {
                        if(edad1 == edad2 && edad2 == edad3)
                        printf("Todas las edades son iguales");
                    }
                }
            }
            }
    return 0;
}
