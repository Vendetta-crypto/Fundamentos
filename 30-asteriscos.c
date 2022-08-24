#include<stdio.h>
#include<stdlib.h>
//hernandez hernandez erik jose
int main()
{
    int numeroDeAsteriscos,i;
    printf("Introduce el numero a imprimir: ");
    scanf("%d",&numeroDeAsteriscos);
    
    printf("Los asteriscos son: ");

    for (i = 0; i < numeroDeAsteriscos; i++)
    {
        printf("*");
    }
    return 0;
}
/*int main ()
{
    int numeroDeAsteriscos, i=0;
    printf("Introduce el numero a imprimir: ");
    scanf("%d",&numeroDeAsteriscos);
    printf("Los asteriscos son: ");
    while (i < numeroDeAsteriscos )
    {
        printf("*");
        i++;
    }
    return 0;
}*/
/*int main ()
{
    int numeroDeAsteriscos, i=0;
    printf("Introduce el numero a imprimr: ");
    scanf("%d",&numeroDeAsteriscos);
     do{
           printf("*");
           i++;
     }while (i < numeroDeAsteriscos);
     return 0;
    
}*/


