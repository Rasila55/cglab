#include <graphics.h>
#include <stdio.h>

void floodFill(int x, int y, int oldColor, int newColor)
{
    if (getpixel(x, y) == oldColor)
    {
        putpixel(x, y, newColor);

        floodFill(x + 1, y, oldColor, newColor);
        floodFill(x - 1, y, oldColor, newColor);
        floodFill(x, y + 1, oldColor, newColor);
        floodFill(x, y - 1, oldColor, newColor);
    }
}

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    // Draw a rectangle
    rectangle(150, 150, 350, 300);

    // Flood fill inside the rectangle
    floodFill(200, 200, BLACK, GREEN);

    getch();
    closegraph();

    return 0;
}
