#include <Arduino.h>
#include <math.h>

//global variables
int toestandDrukknop = 0

//functions
void updateState()

void setup() {
    
}

void loop() {
    void updateState();  
}

void updateState() {
    if(digitalRead(2) == 1) {
        fabs(toestandDrukknop - 1);
    }
}
