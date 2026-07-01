#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    // Polygon vertices
    int poly[] = {
        200,100,
        350,150,
        300,300,
        150,250,
        200,100
    };

    // Draw polygon
    drawpoly(5, poly);

    // Fill polygon using scan lines
    for(int y = 101; y <= 299; y++)
    {
        line(170, y, 320, y);
    }

    getch();
    closegraph();

    return 0;
}
