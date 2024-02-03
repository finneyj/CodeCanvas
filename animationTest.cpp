#include "Canvas.h"
#include "Circle.h"
#include <thread>
#include <chrono>
#include <unistd.h>

int main() {
    Canvas canvas(800, 600);

    int initialX = 100;
    int initialY = 100;

    int moveStepX = 50;
    int moveStepY = 30;

    int radius = 30;

    for (int i = 0; i < 1000; ++i) {

        Circle circle1(initialX, initialY, radius, "red");
        canvas.addCircle(circle1);
        canvas.update();

        initialX += moveStepX;
        initialY += moveStepY;
        if (initialX < 0 || initialX > canvas.getWidth() - radius) {
            moveStepX = -moveStepX;
            initialX += 2 * moveStepX;
        }

        if (initialY < 0 || initialY > canvas.getHeight() - radius) {
            moveStepY = -moveStepY;
            initialY += 2 * moveStepY;
        }

        usleep(20000);
    }

    return 0;
}
