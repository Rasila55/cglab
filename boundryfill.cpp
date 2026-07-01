#include <graphics.h>
#include <stdio.h>

void boundaryFill(int x, int y, int fillColor, int boundaryColor)
{
    int currentColor;

    currentColor = getpixel(x, y);

    if(currentColor != boundaryColor && currentColor != fillColor)
    {
        putpixel(x, y, fillColor);

        boundaryFill(x + 1, y, fillColor, boundaryColor);
        boundaryFill(x - 1, y, fillColor, boundaryColor);
        boundaryFill(x, y + 1, fillColor, boundaryColor);
        boundaryFill(x, y - 1, fillColor, boundaryColor);
    }
}

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    // Draw a rectangle
    rectangle(150, 150, 350, 300);

    // Fill inside the rectangle
    boundaryFill(200, 200, RED, WHITE);

    getch();
    closegraph();

    return 0;
}
