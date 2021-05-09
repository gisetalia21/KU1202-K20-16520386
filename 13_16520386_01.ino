#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);	// pin Arduino terhubung LCD

void setup() {
  lcd.begin(16, 2);						// atur jumlah kolom dan baris LCD
  lcd.print("hello, world!");
}	

void loop() {
  lcd.setCursor(0,1);					// atur kursor ke kolom 0 dan baris 1
  lcd.print(millis() / 1000);			// menampilkan waktu (dalam detik)
}