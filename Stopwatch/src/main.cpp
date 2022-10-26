#include <iostream>
#include <vector>
#include <unistd.h>
#include <stdlib.h>

void displayTime(int hours, int minutes, int seconds);
int on_exit(void (*function)(int, void *), void *arg);

int main() {
    printf("**** C++ Stopwatch ****\n");
    printf("{Press 'CTRL + C' to stop the stopwatch.}\n");

    int hours = 00;
    int minutes = 00;
    int seconds = 00;

    while(true) {
        sleep(1);
        seconds++;
        if(seconds == 60) {
            minutes++;
            seconds = 00;
        }
        if(minutes == 60) {
            hours++;
            minutes = 00;
        }
        displayTime(hours, minutes, seconds);
    }

    return 0;
}

void displayTime(int hours, int minutes, int seconds) {
    printf("Current Time: %d:%d:%d\n", hours, minutes, seconds);
}

int on_exit(void (*function)(int, void *), void *arg) {
    printf("Closed out of program.");
}