#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original cube
    int x = 100, y = 100, size = 80;

    // Scaling factors
    float sx = 1.5, sy = 1.5;

    // Draw original cube
    setcolor(WHITE);

    rectangle(x, y, x + size, y + size);
    rectangle(x + 20, y - 20, x + size + 20, y + size - 20);

    line(x, y, x + 20, y - 20);
    line(x + size, y, x + size + 20, y - 20);
    line(x, y + size, x + 20, y + size - 20);
    line(x + size, y + size, x + size + 20, y + size - 20);

    // Scaled cube
    int ns = size * sx;

    setcolor(RED);

    rectangle(x + 250, y, x + 250 + ns, y + ns);
    rectangle(x + 270, y - 20,
              x + 270 + ns, y + ns - 20);

    line(x + 250, y,
         x + 270, y - 20);

    line(x + 250 + ns, y,
         x + 270 + ns, y - 20);

    line(x + 250, y + ns,
         x + 270, y + ns - 20);

    line(x + 250 + ns, y + ns,
         x + 270 + ns, y + ns - 20);

    getch();
    closegraph();

    return 0;
}
