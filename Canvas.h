#ifndef CANVAS_H
#define CANVAS_H

#include "Circle.h"
#include <vector>
  
class Canvas {
    public:
        // Create a representation of a canvas of the given size. 
        Canvas(int width, int height);
        
        // Add a circle to this canvas
        void addCircle(Circle& circle);

        // Update the JSON file with all the graphical objects on this canvas
        void update();
        
    private:
        int canvasWidth;
        int canvasHeight;
        std::vector<Circle> circles;
};

#endif
