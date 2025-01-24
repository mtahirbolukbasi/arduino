#include <DHT.h>

#include <Wire.h>
#include <hd44780.h>                       // main hd44780 header
#include <hd44780ioClass/hd44780_I2Cexp.h> // i2c expander i/o class header

hd44780_I2Cexp lcd; // declare lcd object: auto locate & auto config expander chip
const int LCD_COLS = 16;
const int LCD_ROWS = 2;

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  
  lcd.begin(LCD_COLS, LCD_ROWS);
  
  dht.begin();
}

void loop() {

  int temp = dht.readTemperature(); 
  int hum = dht.readHumidity();

  lcd.setCursor(0, 0);
  lcd.print("Sicaklik:");
  lcd.setCursor(10, 0);
  lcd.print(temp);
  
  lcd.setCursor(0, 1);
  lcd.print("Nem     :");
  lcd.setCursor(10, 1);
  lcd.print(hum);
  delay(2000);
}



