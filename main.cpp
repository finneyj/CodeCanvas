#include "Canvas.h"
#include "Circle.h"

int main() {

    Canvas canvas(800, 600);

    Circle circle1(200, 100, 30, "red");

    canvas.addCircle(circle1);

    while(1)
    {
        circle1.setX(circle1.getX() + 1);
        canvas.update();
        canvas.pause();
    }

    canvas.update();
    
    printf("Canvas updated...\n");

    return 0;

}
