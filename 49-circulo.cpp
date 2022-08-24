#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
main()
{
    int gdriver = EGA;
    int gmodo = EGAHI;
    int relleno;
    int radio;
    printf("Introduce el radio: ");
    scanf("%d",&radio);

    initgraph( &gdriver, &gmodo, "C:\\BC5\\BGI" );

    relleno = 1;

    setlinestyle( SOLID_LINE, relleno, THICK_WIDTH );
    circle( 300, 200, radio );

    getch();   
    closegraph();

}
