#include <graphics.h>
#include <stdio.h>

void midpointCircle(int xc, int yc, int r)
{
    int x = 0;
    int y = r;
    int p = 1 - r;

    while (x <= y)
    {
        // Plot the 8 symmetric points
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);

        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);

        if (p < 0)
        {
            p = p + 2 * x + 3;
        }
        else
        {
            p = p + 2 * (x - y) + 5;
            y--;
        }
        x++;
    }
}

int main()
{
    int xc, yc, r;

    printf("Enter center of circle (x y): ");
    scanf("%d%d", &xc, &yc);

    printf("Enter radius: ");
    scanf("%d", &r);

    initwindow(640, 480, "Midpoint Circle Drawing Algorithm");

    midpointCircle(xc, yc, r);

    getch();
    closegraph();

    return 0;
}
