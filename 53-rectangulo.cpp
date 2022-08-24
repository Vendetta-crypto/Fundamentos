#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
    int gdriver = EGA;
    int gmodo = EGAHI;
    int relleno;
    int vHorizontal;
    int vVertical;
    printf("Introduce la altura: ");
    scanf("%d",&vVertical);
    printf("Introduce la base: ");
    scanf("%d",&vHorizontal);


    initgraph( &gdriver, &gmodo, "C:\\BC5\\BGI" );

    relleno = 1;

    setlinestyle( SOLID_LINE, relleno, THICK_WIDTH );
    rectangle( 20, 20, vHorizontal, vVertical);

    getch();
    closegraph();

}
