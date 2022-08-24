#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Hernandez Hernandez Erik Jose
int main()
{
    int valorA, valorB, valorC, valorDeB, valorDeBElevado, valorDeAporC, resultadoInferior;
    float resultadoSuperior, segundoRsultado;

    printf("Ingresa los valores de a, b, c: ");
    scanf("%d,%d,%d", &valorA, &valorB, &valorC);
    valorDeB = -valorB;
    valorDeBElevado = pow(valorB, 2);
    valorDeAporC = 4 * valorA * valorC;
    resultadoInferior = 2 * valorA;
    resultadoSuperior = (valorDeB + sqrt(valorDeBElevado - valorDeAporC)) / resultadoInferior;
    segundoRsultado = (valorDeB - sqrt(valorDeBElevado - valorDeAporC)) / resultadoInferior;

    printf("El Resultado de la ecuacion es: %0.2f y %0.2f", resultadoSuperior, segundoRsultado);

    return 0;
}