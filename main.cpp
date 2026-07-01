#include <graphics.h>
#include <conio.h>
#include <math.h>

// Function to implement DDA Line Drawing Algorithm
void DDA(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;

    float X = x1;
    float Y = y1;

    for (int i = 0; i <= steps; i++) {
        putpixel(round(X), round(Y), WHITE);  // plot pixel
        X += Xinc;
        Y += Yinc;
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Example: draw a line from (100,100) to (300,200)
    DDA(100, 100, 300, 200);

    getch();
    closegraph();
    return 0;
}

