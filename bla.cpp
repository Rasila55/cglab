#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    printf("Enter x1 y1: ");

    int x1, y1, x2, y2;
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);

    line(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
