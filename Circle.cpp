#include "Circle.h"

Circle::Circle(int x, int y, int radius, std::string color)
    : x(x), y(y), radius(radius), color(color) {}

int Circle::getX(){
    return x;
}

int Circle::getY(){
    return y;
}          

int Circle::getRadius(){
    return radius;
}

std::string Circle::getColor(){
    return color;
}
