#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    // Initialize the graphics driver and mode
    initgraph(&gd, &gm, "C:\\\\TC\\\\BGI");

    // Set a title
    outtextxy(275, 0, "3D BAR GRAPH");

    // Set fill style (e.g., solid fill, red color)
    setfillstyle(SOLID_FILL, RED);

    // Draw a 3D bar using bar3d function
    // Parameters: left, top, right, bottom, depth, topflag
    bar3d(150, 80, 200, 410, 15, 1);

    // Wait for a key press
    getch();
    // Close the graphics mode
    closegraph();
    return 0;
}
