#include <analogWrite.h>

/* Relay active '0' */
const int RL1 = 18;
const int RL2 = 2;

/* LED active '1' */
const int L1 = 2;
const int L2 = 4;
const int L3 = 23;
const int L4 = 25;
const int L5 = 26;
const int L6 = 27;
const int L7 = 3;
const int L8 = 5;

/* LED SMD active '0' */
const int L9 = 25;
const int L10 = 5;
const int L11 = 14;
const int L12 = 15;

/* Button */
const int BT1 = 19;  
const int BT2 = 18;  
const int BT3 = 17;   
const int BT4 = 16; 

/* Joystick */
const int VRX = 32;  
const int VRY = 33;   
const int SW = 34;  

/* VR */
const int VR1 = 35;  
const int VR2 = 34; // SW 
const int VR3 = 2;  // RL2, L1
const int VR5 = 4;  // L2

int step = 1;
int brightness = 0;

/* Mapping the pins with library
RS-17, EN-16, D4-27, D5-26, D6-33, D7-3219   */
//LiquidCrystal lcd(17,16,27,26,33,32);
void setup(void)
{
/* set baud rate */
Serial.begin(9600);

/* set up the LCD's number of columns and rows */
//lcd.begin(16,2);

pinMode(RL1, OUTPUT);
pinMode(RL2, OUTPUT);

pinMode(L5, OUTPUT);
pinMode(L6, OUTPUT);
pinMode(L7, OUTPUT);
pinMode(L8, OUTPUT);
pinMode(L9, OUTPUT);
pinMode(L10, OUTPUT);
pinMode(L11, OUTPUT);
pinMode(L12, OUTPUT);

pinMode(BT1, INPUT);
pinMode(BT2, INPUT);
pinMode(BT3, INPUT);
pinMode(BT4, INPUT);

pinMode(VRX, INPUT);
pinMode(VRY, INPUT);
pinMode(SW, INPUT);

pinMode(VR1, INPUT);
}
void loop(void)
{
//    for (int i = 0; i <= 255; i++) {
//        analogWrite(L8,i);
//        delay(20);
//        Serial.println(i);
//    }

}
