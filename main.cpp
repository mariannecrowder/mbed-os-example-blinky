#include "mbed.h"

DigitalOut led1(LED1);

// main() runs in its own thread in mbed OS
int main() {
    while (true) {
        led1 = !led1;
        wait(0.5);
    }
}

