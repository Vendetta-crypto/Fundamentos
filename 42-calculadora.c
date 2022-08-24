#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int main()
{
    int numero1, numero2, resultado = 0, opcion, respuesta;
    do
    {
        system("cls");
        printf("Calculadora\n");
        printf("1) Suma\n");
        printf("2) Resta\n");
        printf("3) Multiplicacion\n");
        printf("4) Division\n");
        printf("5) Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        if (opcion > 0 && opcion <= 4)
        {
            printf("Ingresa dos numeros: ");
            scanf("%d,%d", &numero1, &numero2);
        }
        switch (opcion)
        {
        case 1:
            resultado = numero1 + numero2;
            break;
        case 2:
            resultado = numero1 - numero2;
        case 3:
            resultado = numero1 * numero2;
        case 4:
            resultado = numero1 / numero2;
        default:
            printf("Operacion no valida");
            break;
        }
        printf("el resultado es: %d\n", resultado);
        printf("Deseas realizar otra operacion (s/n): ");
        scanf("%d", &respuesta);

    } while (respuesta != 0);
    system("pause");
}
