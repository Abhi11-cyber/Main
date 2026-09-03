#include <graphics.h>
#include <stdio.h>

// Function to implement the Flood Fill Algorithm
void floodFill(int x, int y, int fillColor, int boundaryColor) {
    // Get the current color at the pixel (x, y)
    int currentColor = getpixel(x, y);

    // Check if the current color is not the boundary color and not already filled
    if (currentColor != boundaryColor && currentColor != fillColor) {
        // Set the pixel color to the fill color
        putpixel(x, y, fillColor);

        // Recursively call floodFill for neighboring pixels
        floodFill(x + 1, y, fillColor, boundaryColor); // Right pixel
        floodFill(x - 1, y, fillColor, boundaryColor); // Left pixel
        floodFill(x, y + 1, fillColor, boundaryColor); // Bottom pixel
        floodFill(x, y - 1, fillColor, boundaryColor); // Top pixel
    }
}

int main() {
    int gd = DETECT, gm;
    // Initialize the graphics mode
    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");

    // Draw a polygon (example: a simple rectangle)
    line(150, 100, 250, 100);
    line(250, 100, 250, 200);
    line(250, 200, 150, 200);
    line(150, 200, 150, 100);

    // Set the fill color and the boundary color
    int fillColor = 4;      // Red color
    int boundaryColor = 15; // White color

    // Fill the polygon using flood fill
    floodFill(200, 150, fillColor, boundaryColor);

    // Pause to view the filled polygon
    getch();

    // Close the graphics mode
    closegraph();

    return 0;
}