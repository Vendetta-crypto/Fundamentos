#include<stdio.h>
#include<stdlib.h>
//HErnandez HErnandez Erik Jose
/*intruccion selectiva compuesta*/
main(){

int calificacion;
printf("Introduce tu calificacion: ");
scanf("%d",&calificacion);

if(calificacion>5){
        printf("Aprobaste la materia");
}else{
    printf("Reprobaste la materia");
}
return(0);
}
