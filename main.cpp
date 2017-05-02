#include "mbed.h"

PwmOut pwmout(p25);
DigitalOut led(LED2);

int main(void){
    float duty;
    led = 1; 
    pwmout.period_us(50);
    
    while(1){
        pwmout.write(0.1);
    }
}