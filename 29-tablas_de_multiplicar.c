#include<stdio.h>
#include<stdlib.h>
//hernande hernandez erik jose
/*int main()
{
    int numero,tabla,i;
    printf("Introduce un numero: ");
    scanf("%d",&numero);
    printf("La tabla es:\n");
    for (i = 1; i <= 10; i++)
    {
        tabla = numero * i;
        printf("%dx%d = %d\n",numero,i,tabla);
    }
    return 0;
}*/

int main()
{
    int numero,tabla,i = 1;
    printf("Introduce un numero: ");
    scanf("%d",&numero);
    while (i<11)
    {
        tabla = numero * i;
        printf("%dx%d = %d\n",numero,i,tabla);
        i++;
    }
    
    return 0;
}