#include<stdio.h>
#include<stdlib.h>
//Hernandez Hernandez Erik Jose
int main()
{
    int temperatura, i, promedio = 0, suma;
    for ( i = 0; i <7; i++)
    {
        printf("Introduce la temperatura en grados Fahrenheit: ");
        scanf("%d",&temperatura);
        suma += temperatura;
    }
    promedio= suma/7;
    printf("El promedio es: %d",promedio);
    return 0 no funciona 
}
