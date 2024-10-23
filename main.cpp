#include <wiringPi.h>
#include <iostream>
#include <unistd.h> // for sleep()

int main() {

    wiringPiSetupGpio();

    pinMode(18, OUTPUT);


    while (true) {
        digitalWrite(18, HIGH);
        sleep(1);




        digitalWrite(18, LOW);
        sleep(1);
    }
    return 0;
}
