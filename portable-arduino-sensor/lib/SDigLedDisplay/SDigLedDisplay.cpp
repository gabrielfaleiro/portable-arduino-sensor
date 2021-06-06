
#include "SDigLedDisplay.h"

void SDigLedDisplay::setup(){
    pinMode(SLDD_LED_A, OUTPUT);
    pinMode(SLDD_LED_B, OUTPUT);
    pinMode(SLDD_LED_C, OUTPUT);
    pinMode(SLDD_LED_D, OUTPUT);
    pinMode(SLDD_LED_E, OUTPUT);
    pinMode(SLDD_LED_F, OUTPUT);
    pinMode(SLDD_LED_G, OUTPUT);
}
void SDigLedDisplay::printRaw(uint8_t leds){
    digitalWrite(SLDD_LED_A, leds & 0b00000001);
    digitalWrite(SLDD_LED_B, leds & 0b00000010);
    digitalWrite(SLDD_LED_C, leds & 0b00000100);
    digitalWrite(SLDD_LED_D, leds & 0b00001000);
    digitalWrite(SLDD_LED_E, leds & 0b00010000);
    digitalWrite(SLDD_LED_F, leds & 0b00100000);
    digitalWrite(SLDD_LED_G, leds & 0b01000000);
}
void SDigLedDisplay::print0(){
    //               _GFEDCBA
    uint8_t leds = 0b00111111;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::print1(){
    //               _GFEDCBA
    uint8_t leds = 0b00000110;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::print2(){
    //               _GFEDCBA
    uint8_t leds = 0b01011011;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::print3(){
    //               _GFEDCBA
    uint8_t leds = 0b01001111;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::print4(){
    //               _GFEDCBA
    uint8_t leds = 0b01100110;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::print5(){
    //               _GFEDCBA
    uint8_t leds = 0b01101101;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::print6(){
    //               _GFEDCBA
    uint8_t leds = 0b01111101;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::print7(){
    //               _GFEDCBA
    uint8_t leds = 0b00000111;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::print8(){
    //               _GFEDCBA
    uint8_t leds = 0b01111111;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::print9(){
    //               _GFEDCBA
    uint8_t leds = 0b01100111;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::printA(){
    //               _GFEDCBA
    uint8_t leds = 0b01110111;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::printB(){
    //               _GFEDCBA
    uint8_t leds = 0b01111100;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::printC(){
    //               _GFEDCBA
    uint8_t leds = 0b00111001;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::printD(){
    //               _GFEDCBA
    uint8_t leds = 0b01011110;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::printE(){
    //               _GFEDCBA
    uint8_t leds = 0b01111001;
    SDigLedDisplay::printRaw(leds);
}
void SDigLedDisplay::printF(){
    //               _GFEDCBA
    uint8_t leds = 0b01110001;
    SDigLedDisplay::printRaw(leds);
}
int  SDigLedDisplay::printInt(uint8_t num){
    switch (num){
        case 0:
            SDigLedDisplay::print0();
            break;
        case 1:
            SDigLedDisplay::print1();
            break;
        case 2:
            SDigLedDisplay::print2();
            break;
        case 3:
            SDigLedDisplay::print3();
            break;
        case 4:
            SDigLedDisplay::print4();
            break;
        case 5:
            SDigLedDisplay::print5();
            break;
        case 6:
            SDigLedDisplay::print6();
            break;
        case 7:
            SDigLedDisplay::print7();
            break;
        case 8:
            SDigLedDisplay::print8();
            break;
        case 9:
            SDigLedDisplay::print9();
            break;
        case 10:
            SDigLedDisplay::printA();
            break;
        case 11:
            SDigLedDisplay::printB();
            break;
        case 12:
            SDigLedDisplay::printC();
            break;
        case 13:
            SDigLedDisplay::printD();
            break;
        case 14:
            SDigLedDisplay::printE();
            break;
        case 15:
            SDigLedDisplay::printF();
            break;
        default:
            //               _GFEDCBA
            uint8_t leds = 0b00001000;
            SDigLedDisplay::printRaw(leds);
            break;
    }
    return 0;
}
