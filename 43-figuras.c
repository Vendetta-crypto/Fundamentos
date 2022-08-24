#include <stdio.h>
#include <stdlib.h>
// Hernandez Hernandez Erik Jose
int main()
{
    int opcion, base, altura, area = 0, lado, respuesta, radio;
    do
    {
        system("cls");
        printf("Areas\n");
        printf("1) Cuadrado\n");
        printf("2) Rectangulo\n");
        printf("3) Triangulo\n");
        printf("4) Circulo\n");
        printf("5) Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("Ingresa el valor del lado:  ");
            scanf("%d", &lado);
            area = lado * lado;
            break;
        case 2:
            printf("Ingrese la base y la altura: ");
            scanf("%d,%d", &base, &altura);
            area = base * altura;
            break;
        case 3:
            printf("Ingresa la base y la altura: ");
            scanf("%d,%d", &base, &altura);
            area = (base * altura) / 2;
            break;
        case 4:
            printf("Ingresa el valor del radio: ");
            scanf("%d", &radio);
            area = 3.1416 * radio * radio;
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Operacion no valida");
            break;
        }
        printf("el area es: %d\n", area);
        printf("Desea realuzar otra operacion (s/n)\n");
        scanf("%d", &respuesta);
    } while (respuesta != 0);
    return 0;
}
