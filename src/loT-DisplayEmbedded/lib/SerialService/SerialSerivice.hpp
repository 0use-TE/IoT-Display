#pragma once
#include"Arduino.h"
#include "Pins.hpp"
class SerialSerivice
{
private:
    /* data */
public:
    SerialSerivice();
    ~SerialSerivice();
};

SerialSerivice::SerialSerivice()
{
 Serial.begin(Serial_Speed); 
}

SerialSerivice::~SerialSerivice()
{
}
