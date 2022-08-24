#include<stdio.h>
#include<stdlib.h>

int mat1[3][3]
,i,j;

main()
{ //llenado de la matriz
  for (i=0;i<=2;i++)//filas
  {
  for(j=0;j<=2;j++)//columnas
  { printf("ingresa numero: ");
    scanf("%d",&mat1[i][j]);
  }
  }
  //impresion

  for (i=0;i<=2;i++)//filas
  {
      for(j=0;j<=2;j++)//columnas
      {
          printf("%d\t",mat1[i][j]);
      }printf("\n\n");
  }
system("pause");
}