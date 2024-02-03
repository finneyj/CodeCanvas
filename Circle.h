#ifndef CIRCLE_H
#define CIRCLE_H 

#include <string>
  
class Circle {

    public:
        Circle(int x, int y, int radius, std::string color);
        int getX();
        int getY();
        int getRadius();
        std::string getColor();
      
    private:
        int x;
        int y;
        int radius;
        std::string color;
};

#endif
