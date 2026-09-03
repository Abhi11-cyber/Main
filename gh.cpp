#include <graphics.h>
#include <conio.h>


int main() {
    // Initialize the graphics system
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");

    // Set the color and draw shapes
    setcolor(WHITE);
    circle(200, 200, 50);  // Draw a circle with center (200, 200) and radius 50
    rectangle(100, 100, 300, 200);  // Draw a rectangle with top-left (100, 100) and bottom-right (300, 200)
    line(50, 50, 400, 50);  // Draw a line from (50, 50) to (400, 50)

    // Keep the graphics window open until a key is pressed
    getch();
    
    // Close the graphics system
    closegraph();
    return 0;
}
