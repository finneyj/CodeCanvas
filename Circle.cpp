#include "Circle.h"

// Constructor: Creates a new Circle, with the given geometry.
Circle::Circle(int xPosition, int yPosition, int size, std::string col)
{
    x = xPosition;
    y = yPosition;
    radius = size;
    colour = col;
}

// Returns the current X coordinate of this circle.
int Circle::getX(){
    return x;
}

// Returns the current Y coordinate of this circle.
int Circle::getY(){
    return y;
}          

// Returns the current radius of this circle.
int Circle::getRadius(){
    return radius;
}

// Returns the current color of this circle.
std::string Circle::getColour(){
    return colour;
}
