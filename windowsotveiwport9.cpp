#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Window coordinates
    float wxmin = 100, wymin = 100;
    float wxmax = 300, wymax = 300;

    // Viewport coordinates
    float vxmin = 350, vymin = 100;
    float vxmax = 550, vymax = 300;

    // A point in the window
    float xw = 180, yw = 220;

    // Draw Window
    rectangle(wxmin, wymin, wxmax, wymax);
    outtextxy(150, 80, "Window");

    // Draw Viewport
    rectangle(vxmin, vymin, vxmax, vymax);
    outtextxy(410, 80, "Viewport");

    // Plot original point
    setcolor(RED);
    circle(xw, yw, 3);

    // Window to Viewport Transformation
    float xv = vxmin + ((xw - wxmin) * (vxmax - vxmin)) / (wxmax - wxmin);
    float yv = vymin + ((yw - wymin) * (vymax - vymin)) / (wymax - wymin);

    // Plot transformed point
    setcolor(GREEN);
    circle(xv, yv, 3);

    getch();
    closegraph();

    return 0;
}
