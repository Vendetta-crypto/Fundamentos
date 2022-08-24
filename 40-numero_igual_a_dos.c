#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int main(int argc, char const *argv[])
{
    int numero1, numero2, numero3;
    printf("Introduce los 3 numeros: ");
    scanf("%d,%d,%d", &numero1, &numero2, &numero3);
    if (numero3 == numero1 + numero2)
    {
        printf("Es igual a la suma");
    }
    else
    {
        printf("No es igual al tercero");
    }
    return 0;
}
