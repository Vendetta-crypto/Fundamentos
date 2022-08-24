#include<stdio.h>
#include<stdlib.h>

main()
{
    int dolar,peso;

    printf("Introduce la contadiad de Dolares $$ para convertirlos a pesos\n");
    scanf("%d",&dolar);

    peso = dolar*20;

    printf("Los pesos son:%d", peso);
    return 0;
}
