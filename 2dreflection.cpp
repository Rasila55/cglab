#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original line
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 150;

    // Draw X and Y axes
    line(320, 0, 320, 480);   // Y-axis
    line(0, 240, 640, 240);   // X-axis

    // Draw original object
    setcolor(WHITE);
    line(x1, y1, x2, y2);

    // Reflection about X-axis
    setcolor(RED);
    line(x1, 480 - y1, x2, 480 - y2);

    // Reflection about Y-axis
    setcolor(GREEN);
    line(640 - x1, y1, 640 - x2, y2);

    getch();
    closegraph();
    return 0;
}
