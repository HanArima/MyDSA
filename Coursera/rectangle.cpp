#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{
    // Initialize graphics window
    initwindow(640, 480, "2D Viewing Pipeline");

    // Define rectangle vertices
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 200;

    // Perform modeling and viewing transformations
    int dx = 50, dy = 50;
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;

    // Perform projection transformation
    int sx = 2, sy = 2;
    x1 *= sx; y1 *= sy;
    x2 *= sx; y2 *= sy;

    // Clip the rectangle against the screen boundaries
    int left = 0, top = 0, right = getmaxx(), bottom = getmaxy();
    int clipped_x1 = max(left, min(right, x1));
    int clipped_y1 = max(top, min(bottom, y1));
    int clipped_x2 = max(left, min(right, x2));
    int clipped_y2 = max(top, min(bottom, y2));

    // Render the clipped rectangle
    rectangle(clipped_x1, clipped_y1, clipped_x2, clipped_y2);

    // Wait for user input before closing the window
    getch();
    closegraph();
    return 0;
}