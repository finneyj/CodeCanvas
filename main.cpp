#include "Canvas.h"
#include "Circle.h"

int main() {

    Canvas canvas(800, 600);

    Circle circle1(200, 100, 30, "red");
    Circle circle2(220, 100, 30, "red");

    canvas.addCircle(circle1);
    canvas.addCircle(circle2);

    while(1)
    {
        circle1.move(1,0);
        circle2.move(1,0);

        canvas.update();
        canvas.pause();
    }

    canvas.update();
    
    printf("Canvas updated...\n");

    return 0;

}
