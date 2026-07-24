#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original cube (front face)
    int x = 100, y = 100, size = 100;

    // Translation values
    int tx = 150, ty = 80;

    // Draw original cube
    setcolor(WHITE);

    rectangle(x, y, x + size, y + size);
    rectangle(x + 30, y - 30, x + size + 30, y + size - 30);

    line(x, y, x + 30, y - 30);
    line(x + size, y, x + size + 30, y - 30);
    line(x, y + size, x + 30, y + size - 30);
    line(x + size, y + size, x + size + 30, y + size - 30);

    // Draw translated cube
    setcolor(RED);

    rectangle(x + tx, y + ty, x + size + tx, y + size + ty);
    rectangle(x + 30 + tx, y - 30 + ty,
              x + size + 30 + tx, y + size - 30 + ty);

    line(x + tx, y + ty,
         x + 30 + tx, y - 30 + ty);

    line(x + size + tx, y + ty,
         x + size + 30 + tx, y - 30 + ty);

    line(x + tx, y + size + ty,
         x + 30 + tx, y + size - 30 + ty);

    line(x + size + tx, y + size + ty,
         x + size + 30 + tx, y + size - 30 + ty);

    getch();
    closegraph();

    return 0;
}
