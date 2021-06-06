
#include <Arduino.h>

class SDigLedDisplay{
    private:
        uint8_t _ledA = 0;
        uint8_t _ledB = 0;
        uint8_t _ledC = 0;
        uint8_t _ledD = 0;
        uint8_t _ledE = 0;
        uint8_t _ledF = 0;
        uint8_t _ledG = 0;
    public:
        void setup(uint8_t ledA,
                   uint8_t ledB,
                   uint8_t ledC,
                   uint8_t ledD,
                   uint8_t ledE,
                   uint8_t ledF,
                   uint8_t ledG);
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