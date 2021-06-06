
#include <Arduino.h>

#define SLDD_LED_A 2
#define SLDD_LED_B 3
#define SLDD_LED_C 4
#define SLDD_LED_D 7
#define SLDD_LED_E 8
#define SLDD_LED_F 12
#define SLDD_LED_G 13

class SDigLedDisplay{
    public:
        void setup();
        void printRaw(uint8_t leds);
        void print0();
        void print1();
        void print2();
        void print3();
        void print4();
        void print5();
        void print6();
        void print7();
        void print8();
        void print9();
        void printA();
        void printB();
        void printC();
        void printD();
        void printE();
        void printF();
        int  printInt(uint8_t num);
};