#include<stdio.h>
#include<stdlib.h>
//Hernandez Hernandez Erik Jose
int main()
{
    int numero;
    for ( numero = 1; numero <= 10; numero++)
    {
        if (numero %2 == 0)
        {
            printf("%d,",numero);
        }
    }
    return 0;
}
