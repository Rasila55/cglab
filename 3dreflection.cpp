#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original cube position
    int x = 100, y = 120, size = 80;

    // Draw original cube
    setcolor(WHITE);

    rectangle(x, y, x + size, y + size);
    rectangle(x + 20, y - 20, x + size + 20, y + size - 20);

    line(x, y, x + 20, y - 20);
    line(x + size, y, x + size + 20, y - 20);
    line(x, y + size, x + 20, y + size - 20);
    line(x + size, y + size, x + size + 20, y + size - 20);

    // Reflection about Y-axis (displayed on the right)
    int rx = 400;

    setcolor(RED);

    rectangle(rx, y, rx + size, y + size);
    rectangle(rx + 20, y - 20, rx + size + 20, y + size - 20);

    line(rx, y, rx + 20, y - 20);
    line(rx + size, y, rx + size + 20, y - 20);
    line(rx, y + size, rx + 20, y + size - 20);
    line(rx + size, y + size, rx + size + 20, y + size - 20);

    getch();
    closegraph();
    return 0;
}
