#ifndef CIRCLE_H
#define CIRCLE_H 

#include <string>

class Circle {

    public:

        // Constructor: Creates a new Circle, with the given geometry.
        Circle(int xPosition, int yPosition, int size, std::string col);

        // Returns the current X coordinate of this circle.
        int getX();

        // Returns the current Y coordinate of this circle.
        int getY();

        // Returns the current radius of this circle.
        int getRadius();

        // Returns the current colour of this circle.
        std::string getColour();
      
    private:
        int x;
        int y;
        int radius;
        std::string colour;
};

#endif
