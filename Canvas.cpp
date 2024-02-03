#include "Canvas.h"
#include <iostream>
#include <fstream>
#include <sstream>


Canvas::Canvas(int width, int height) : canvasWidth(width), canvasHeight(height) {}

void Canvas::addCircle(Circle& circle) {
    circles.push_back(circle);
}

void Canvas::update() {
    std::ofstream outFile("circles.json");

    if (outFile.is_open()) {
    
        outFile << "[";
        for (auto& circle : circles) {
            outFile << "{ \"x\": " << circle.getX() << ", \"y\": " << circle.getY() << ", \"radius\": " << circle.getRadius() << ", \"color\": \"" << circle.getColor() << "\" },";
        }
        if (!circles.empty()) {
            outFile.seekp(-1, std::ios_base::end); // Remove the last comma
        }
        outFile << "]";
        outFile.close();
    } else {
        std::cerr << "Error opening circles.json file" << std::endl;
    }
    
    circles.clear();
}
