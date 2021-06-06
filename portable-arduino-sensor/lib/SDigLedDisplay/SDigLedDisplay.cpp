
#include "SDigLedDisplay.h"

void SDigLedDisplay::setup(uint8_t ledA,
                           uint8_t ledB,
                           uint8_t ledC,
                           uint8_t ledD,
                           uint8_t ledE,
                           uint8_t ledF,
                           uint8_t ledG){
    SDigLedDisplay::_ledA = ledA;
    SDigLedDisplay::_ledB = ledB;
    SDigLedDisplay::_ledC = ledC;
    SDigLedDisplay::_ledD = ledD;
    SDigLedDisplay::_ledE = ledE;
    SDigLedDisplay::_ledF = ledF;
    SDigLedDisplay::_ledG = ledG;
    pinMode(SDigLedDisplay::_ledA, OUTPUT);
    pinMode(SDigLedDisplay::_ledB, OUTPUT);
    pinMode(SDigLedDisplay::_ledC, OUTPUT);
    pinMode(SDigLedDisplay::_ledD, OUTPUT);
    pinMode(SDigLedDisplay::_ledE, OUTPUT);
    pinMode(SDigLedDisplay::_ledF, OUTPUT);
    pinMode(SDigLedDisplay::_ledG, OUTPUT);
}
void SDigLedDisplay::printRaw(uint8_t leds){
    digitalWrite(SDigLedDisplay::_ledA, leds & 0b00000001);
    digitalWrite(SDigLedDisplay::_ledB, leds & 0b00000010);
    digitalWrite(SDigLedDisplay::_ledC, leds & 0b00000100);
    digitalWrite(SDigLedDisplay::_ledD, leds & 0b00001000);
    digitalWrite(SDigLedDisplay::_ledE, leds & 0b00010000);
    digitalWrite(SDigLedDisplay::_ledF, leds & 0b00100000);
    digitalWrite(SDigLedDisplay::_ledG, leds & 0b01000000);
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
