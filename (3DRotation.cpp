#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original cube
    int x = 100, y = 150, size = 100;

    // Rotation angle
    float angle = 30 * 3.14159 / 180;

    // Original Cube
    setcolor(WHITE);

    rectangle(x, y, x + size, y + size);
    rectangle(x + 30, y - 30, x + size + 30, y + size - 30);

    line(x, y, x + 30, y - 30);
    line(x + size, y, x + size + 30, y - 30);
    line(x, y + size, x + 30, y + size - 30);
    line(x + size, y + size, x + size + 30, y + size - 30);

    // Rotate front face about origin
    int rx = x * cos(angle) - y * sin(angle);
    int ry = x * sin(angle) + y * cos(angle);

    // Rotated Cube
    setcolor(RED);

    rectangle(rx, ry, rx + size, ry + size);
    rectangle(rx + 30, ry - 30,
              rx + size + 30, ry + size - 30);

    line(rx, ry, rx + 30, ry - 30);
    line(rx + size, ry,
         rx + size + 30, ry - 30);
    line(rx, ry + size,
         rx + 30, ry + size - 30);
    line(rx + size, ry + size,
         rx + size + 30, ry + size - 30);

    getch();
    closegraph();

    return 0;
}
