#include <graphics.h>
#include <conio.h>

int main()
{
    // Initialize the graphics driver and mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    // Draw a circle: center at (250, 200), radius 80
    circle(250, 200, 80);

    // Draw a rectangle: top-left (150, 100), bottom-right (350, 300)
    rectangle(150, 100, 350, 300);

    // Draw a line: from (150, 100) to (250, 200)
    line(150, 100, 250, 200);

    // Wait for a key press
    getch();

    // Close the graphics window
    closegraph();

    return 0;
}
