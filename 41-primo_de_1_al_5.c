#include<stdio.h>
#include<stdlib.h>
//Hernandez Hernandez Erik Jose
int main(int argc, char const *argv[])
{
    int numero;
    printf("Introduce un numero del 1 al 5: ");
    scanf("%d",&numero);
    if (numero!= 4)
    {
        printf("Es un numero primo");
    }else
    {
        printf("No es primo");
    }
    return 0;
}
