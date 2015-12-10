/*-----------------------------------------------------------------------
/ 
/----------------------------------------------------------------------*/
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1305.h>
/*---------------------------------------------------------------------*/
#define OLED_DC 8
#define OLED_RESET 9
#define OLED_CS 10
#define OLED_MOSI 11
#define OLED_CLK 13
/*---------------------------------------------------------------------*/
// software SPI
//Adafruit_SSD1305 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);
/*---------------------------------------------------------------------*/
// hardware SPI
Adafruit_SSD1305 display(OLED_DC, OLED_RESET, OLED_CS);
/*---------------------------------------------------------------------*/
void setup()
{                
  /*--------------------------------------------------------------------*/
  Serial.begin(9600);
  Serial.println("SSD1305 OLED test");
  
  /*--------------------------------------------------------------------*/
  display.begin();
  display.clearDisplay();
  display.display();

  /*--------------------------------------------------------------------*/
  display.setTextSize(1);
  display.setTextWrap(true);
  display.setTextColor(WHITE);

  /*--------------------------------------------------------------------*/
  display.setCursor(0,0);
  display.print("line1.1");
  display.display();
  delay(1000);

  display.setCursor(0,8);
  display.print("line2.1");
  display.display();
  delay(1000);

  display.setCursor(0,16);
  display.print("line3.1");
  display.display();
  delay(1000);

  display.setCursor(0,24);
  display.print("line4.1");
  display.display();
  delay(1000);

  /*--------------------------------------------------------------------*/
  display.setCursor(64,0);
  display.print("line1.2");
  display.display();
  delay(1000);

  display.setCursor(64,8);
  display.print("line2.2");
  display.display();
  delay(1000);

  display.setCursor(64,16);
  display.print("line3.2");
  display.display();
  delay(1000);

  display.setCursor(64,24);
  display.print("line4.2");
  display.display();
  delay(1000);
  
}
/*---------------------------------------------------------------------*/
void loop()
{    
  // ... 
}
/*---------------------------------------------------------------------*/