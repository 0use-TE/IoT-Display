#include "DisplayService.h"

DisplayService::DisplayService()
    : _tft(TFT_CS, TFT_DC, TFT_RESET),  
      _ledPin(TFT_LED)                 
{
}
void DisplayService::Initialize() {
    _tft.begin();
    pinMode(_ledPin, OUTPUT);
    SetBacklight(true);
    ClearScreen(ILI9341_BLACK);
    Serial.println("TFT初始化成功!");
}

void DisplayService::ClearScreen(uint16_t color) {
    _tft.fillScreen(color);
}

void DisplayService::DrawText(int16_t x, int16_t y, const char* text, uint16_t color) {
    _tft.setCursor(x, y);
    _tft.setTextColor(color);
    _tft.setTextSize(2);
    _tft.print(text);
}

void DisplayService::SetBacklight(bool on) {
    digitalWrite(_ledPin, on ? HIGH : LOW);
}
