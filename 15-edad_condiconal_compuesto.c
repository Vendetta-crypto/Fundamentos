#include<stdio.h>
#include<stdlib.h>
/*intruccion selectiva compuesta*/
main(){

int edad;
printf("Introduce tu edad: ");
scanf("%d",&edad);

if(edad>=18){
        printf("Eres mayor de edad y si puedes votar");
}else{
    printf("No puedes votar");
}

return(0);
}
