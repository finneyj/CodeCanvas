#include "Canvas.h"
#include "Circle.h"
#include <thread>
#include <chrono>

int main() {
    Canvas canvas(800, 600);

    int initialX = 100;
    int initialY = 100;

    int moveStepX = 5;
    int moveStepY = 3;

    int radius = 30;

    for (int i = 0; i < 100; ++i) {

        Circle circle1(initialX, initialY, radius, "red");
        canvas.addCircle(circle1);
        canvas.update();

        initialX += moveStepX;
        initialY += moveStepY;
        if (initialX < 0 || initialX > canvas.getWidth() - radius) {
            moveStepX = -moveStepX;
        }

        if (initialY < 0 || initialY > canvas.getHeight() - radius) {
            moveStepY = -moveStepY;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    return 0;
}