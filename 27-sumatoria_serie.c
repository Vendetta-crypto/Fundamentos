#include <stdio.h>
#include <stdlib.h>
// hernande hernandez erik jose
int main()
{
  int numero, incremento;
  double resultado=0;
  printf("Ingresa un numero: ");
  scanf("%d",&numero);
  for (incremento = 1; incremento <= numero; incremento++)
  {
    resultado = resultado + (1.0/incremento);
  }
  printf("La sumatoria es: %f",resultado);
    return 0;
}