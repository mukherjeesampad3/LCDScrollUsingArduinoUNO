#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
char inputVariable[8] = "YouTube";
char inputVariable1[14] = "Learn To Code";
int i;
int j;
void setup()
{
 lcd.begin(16, 2);
}
void loop() {
 // set the cursor to (0,0):
 lcd.setCursor(0, 0);

 // print from 0 to 14:
 for (i= 0; i < 7; i++) {
 lcd.print(inputVariable[i]);
 delay(500);
 }
 

 lcd.setCursor(0, 1);

 // print from 0 to 14:
 for (j= 0; j < 13; j++) {
 lcd.print(inputVariable1[j]);
 delay(500);
 }
 lcd.clear();
}
