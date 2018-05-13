#include <Arduino.h>
#include <TM1637Display.h>

// Pinos de controle do modulo
#define CLK 4
#define DIO 5
#define DELAY 30

int NumStep = 0;  //Variable to interate

TM1637Display display(CLK, DIO);  // definido o digito do display

void setup() {
    display.setBrightness(0x0a); //definido o brilho set the diplay to maximum brightness
}


void loop() {
    for (NumStep = 0; NumStep < 9999; NumStep++) {
        display.showNumberDec(NumStep);
        delay(DELAY); 
    }
}
