#include<stdio.h>
#include<stdlib.h>
//Hernandez Hernandez Erik 
int main()
{
    char cadena1,cadena2;
    int comparar;
    printf("Ingresa la cadena 1: ");
    scanf("%s",&cadena1);
    printf("Ingresa la cadena 2: ");
    scanf("%s",&cadena2);
    for (int i = 0; i < cadena1; i++)
    {
        if (cadena1!=cadena2)
        {
            comparar=1;
        }else{
            comparar=0;
        }
        
    }if (comparar==1)
    {
        printf("Palabras iguales");
    }else
    {
        printf("Palabras distintas");
    }
    return 0;
}


