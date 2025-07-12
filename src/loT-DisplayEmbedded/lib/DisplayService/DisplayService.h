#pragma once
#include <Arduino.h>
#include <Adafruit_ILI9341.h>
#include "Pins.hpp"

class DisplayService {
public:
    DisplayService();

    void Initialize();
    void ClearScreen(uint16_t color);
    void DrawText(int16_t x, int16_t y, const char* text, uint16_t color);
    void SetBacklight(bool on);

private:
    Adafruit_ILI9341 _tft;
    uint8_t _ledPin;
};
