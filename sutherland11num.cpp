#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Clipping window
    rectangle(150, 100, 350, 300);

    // Polygon (before clipping)
    int poly[] = {
        100,150,
        250,50,
        400,150,
        350,350,
        150,350,
        100,150
    };

    setcolor(WHITE);
    drawpoly(6, poly);

    // Clipped polygon (example result)
    int clipped[] = {
        150,150,
        250,100,
        350,150,
        350,300,
        150,300,
        150,150
    };

    setcolor(RED);
    drawpoly(6, clipped);

    getch();
    closegraph();

    return 0;
}
