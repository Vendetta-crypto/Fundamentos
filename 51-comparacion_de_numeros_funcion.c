#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int mayor(float numero1, float numero2);
int main()
{
    float nu1, nu2;
    printf("Introeuce los numeros: ");
    scanf("%f,%f", &nu1, &nu2);
    printf("El mensaje es: %d", mayor(nu1, nu2));
    return 0;
}
int mayor(float numero1, float numero2)
{
    int mensaje = 0;
    if (numero1 < numero2)
    {
        mensaje = -1;
    }
    else
    {
        mensaje = 1;
    }
    if (numero1 == numero2)
    {
        mensaje = 0;
    }
    return mensaje;
}
