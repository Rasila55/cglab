#include <graphics.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original line coordinates
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;

    // Draw original line
    setcolor(WHITE);
    line(x1, y1, x2, y2);

    // -------- Translation --------
    int tx = 100, ty = 50;

    setcolor(RED);
    line(x1 + tx, y1 + ty, x2 + tx, y2 + ty);

    // -------- Scaling --------
    float sx = 2.0, sy = 2.0;

    setcolor(GREEN);
    line(x1 * sx, y1 * sy, x2 * sx, y2 * sy);

    // -------- Rotation --------
    float angle = 45 * 3.14159 / 180;

    int xr1 = x1 * cos(angle) - y1 * sin(angle);
    int yr1 = x1 * sin(angle) + y1 * cos(angle);

    int xr2 = x2 * cos(angle) - y2 * sin(angle);
    int yr2 = x2 * sin(angle) + y2 * cos(angle);

    setcolor(YELLOW);
    line(xr1, yr1, xr2, yr2);

    getch();
    closegraph();

    return 0;
} 
