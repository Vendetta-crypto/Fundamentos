#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Hernandez Hernandez Erik Jose
int main()
{
    float numero;
    printf("Ingrese un numero con punto decimal para sacar su valor absoluto: ");
    scanf("%f",&numero);
    printf("%0.2f",fabs(numero));
    return 0;
}
