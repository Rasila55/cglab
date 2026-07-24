#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original rectangle coordinates
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;
    int x3 = 200, y3 = 200;
    int x4 = 100, y4 = 200;

    // Draw original rectangle
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);

    // Shearing factors
    float shx = 0.5;
    float shy = 0.3;

    // X-Shearing
    int sx1 = x1 + shx * y1;
    int sx2 = x2 + shx * y2;
    int sx3 = x3 + shx * y3;
    int sx4 = x4 + shx * y4;

    setcolor(RED);
    line(sx1, y1, sx2, y2);
    line(sx2, y2, sx3, y3);
    line(sx3, y3, sx4, y4);
    line(sx4, y4, sx1, y1);

    getch();
    closegraph();
    return 0;
}
