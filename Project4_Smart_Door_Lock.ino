#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
// -----------------LCD Display-------------------
const int LCD_ADDRESS = 0x27;   // Change this address if necessary
const int LCD_COLUMNS = 16;
const int LCD_ROWS = 2;


LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS) ;

//-----------------------Keypad----------------------
const byte ROWS = 4; // Four rows
const byte COLS = 4; // Four columns
char keys[ROWS][COLS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
} ;
byte rowPins[ROWS] = {9, 8, 7, 6};  // Connect to the row pinouts of the keypad
byte colPins[COLS] = {5, 4, 3, 2};  // Connect to the column pinouts of the keypad
// Create the Keypad object
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

//-------------------Password------------------------------

String inputPassword="";
String systemPassword="1234";

int password_length=4; 
//------------------LOCK------------------------------------
int lock =10;
void setup()
{
    lcd.init();
    lcd.clear();
    lcd.backlight();

    Serial.begin(9600);
    pinMode(lock,OUTPUT);
}
void loop()
{
    lcd.clear();
    lcd.setCursor (0,0);
    lcd.print("Enter Your pass:");
    int i = 0;
while (1) {
  char key = keypad.getKey();
  if (key) {
    if (inputPassword.length() < password_length) {
      inputPassword = inputPassword + key;
      lcd.setCursor(i, 1);
      lcd.print("*");
      i++;

      if (inputPassword.length() == password_length) {
        if (inputPassword == systemPassword) {
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Door Unlocked.");
          digitalWrite(lock, HIGH);
          delay(5000);
          inputPassword = ""; // password reset
          break;
        } else {
          lcd.clear();
          lcd.setCursor(0, 0);
          lcd.print("Access Denied");
          delay(2000);
          inputPassword = ""; // password reset
          break;
        }
      }
    }
  }
}

digitalWrite(lock, LOW);
}