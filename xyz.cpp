#include<stdlib.h>
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file


    // Initialize graphics 
    initgraph(&gd, &gm,data);

    // Draw a circle at (200, 200) with radius 50
    circle(200, 200, 50);

    // Wait for a key press
    getch();

    // Close the graphics window
    closegraph();
    return 0;
}
