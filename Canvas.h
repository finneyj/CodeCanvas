#ifndef CANVAS_H
#define CANVAS_H

#include "Circle.h"
#include <vector>
  
class Canvas {
    public:
        Canvas(int width, int height);
        void addCircle(Circle& circle);
        void update();
        
    private:
        int canvasWidth;
        int canvasHeight;
        std::vector<Circle> circles;
};

#endif
