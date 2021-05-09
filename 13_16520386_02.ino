#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);	// pin Arduino terhubung LCD
const int ping_Pin = A1;				// pin Arduino terhubung Ultrasonic sensor	
long dur, cm;							// simpan nilai durasi dan jarak (cm)

void setup() {
  lcd.begin(16, 2);						// atur jumlah kolom dan baris LCD
  lcd.print("PING Sensor");
}	

void loop() {
  cm = read_sensor_ultrasonic();
  
  /* Print to LCD */
  lcd.setCursor(0,1);					// atur kursor ke kolom 0 dan baris 1
  lcd.print("Jarak ");
  lcd.setCursor(6,1);					// atur kursor ke kolom 6 dan baris 1
  lcd.print(cm);						// cetak nilai jarak
  print_unit_cm(cm);					// cetak satuan (cm)
}