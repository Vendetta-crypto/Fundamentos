#include<stdio.h>
#include<stdlib.h>
//hernandez hernandez erik jose
main()
{
    char letra;

    printf("Introduce una letra cualquiera: ");
    scanf("%c",&letra);
    switch(letra) {

    case 'A':
    case 'a':

        printf("Es vocal");
        break;

    case 'E':
    case 'e':

        printf("Es vocal");
        break;

    case 'I':
    case 'i':
        printf("Es vocal");
        break;

    case 'O':
    case 'o':
        printf("Es vocal");
        break;

    case 'U':
    case 'u':
        printf("Es vocal");
        break;

    default: printf("Es consonante");
    }
    return 0;
}
