#include <graphics.h>
#include <conio.h>

// Function to draw the sun
void drawSun() {
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    circle(100, 100, 50); // Sun
    floodfill(101, 101, YELLOW);
}

// Function to draw mountains
void drawMountains() {
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    int points1[] = {50, 300, 200, 100, 350, 300, 50, 300}; // Mountain 1
    int points2[] = {200, 300, 400, 150, 600, 300, 200, 300}; // Mountain 2
    drawpoly(4, points1);
    fillpoly(4, points1);
    drawpoly(4, points2);
    fillpoly(4, points2);
}

// Function to draw the river
void drawRiver() {
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    rectangle(0, 400, 640, 480);
    floodfill(10, 410, BLUE);
}

// Function to draw a tree
void drawTree(int x, int y) {
    setcolor(BROWN);
    setfillstyle(SOLID_FILL, BROWN);
    rectangle(x, y, x + 20, y + 60); // Tree trunk
    floodfill(x + 1, y + 1, BROWN);

    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    circle(x + 10, y - 20, 30); // Tree foliage
    floodfill(x + 10, y - 20, GREEN);
}

// Function to draw the grassy field
void drawGrass() {
    setcolor(GREEN);
    setfillstyle(SOLID_FILL, GREEN);
    rectangle(0, 300, 640, 400); // Grass area
    floodfill(10, 310, GREEN);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Initialize graphics mode

    // Draw the scene
    drawSun();
    drawMountains();
    drawGrass();
    drawRiver();

    // Draw multiple trees
    drawTree(100, 320);
    drawTree(200, 320);
    drawTree(300, 320);
    drawTree(500, 320);

    getch(); // Wait for a key press
    closegraph(); // Close the graphics mode
    return 0;
}
