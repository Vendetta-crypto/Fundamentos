/*estructura selectiva anidad*/
#include<stdlib.h>
#include<stdio.h>

main() {
    int edad1,edad2,edad3,edad4;

    printf("proporciona las 4 edades: ");
    scanf("%d,%d,%d,%d", &edad1,&edad2,&edad3,&edad4);
    if(edad1<edad2 && edad2<edad3 && edad3<edad4)
        printf("la edad menor es el primero");
    else{
        if(edad2<edad3 && edad3<edad4)
            printf("la edad menor es el segundo");
        else{
            if(edad3<edad4)
                printf("la edad menor es el tercero");
            else{
                if(edad4<edad3)
                    printf("la cuarta edad es el menor");
                    else{
                        printf("todas son iguales");
                        }
                }
            }
        }
return (0);
}
