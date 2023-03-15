#include <Keypad.h>

#include <LiquidCrystal.h>
#include <Servo.h>

int pos=0; 
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
const byte rows=4;
const byte cols=3;

char key[rows][cols]={
{'1','2','3'},
{'4','5','6'},
{'7','8','9'},
{'*','0','#'}
};
byte rowPins[rows]={1,2,3,4};
byte colPins[cols]={5,6,7};
Keypad keypad= Keypad(makeKeymap(key),rowPins,colPins,rows,cols);
char* password="6565";
int currentposition=0;




void setup()
{

displayscreen();
Serial.begin(9600);
pinMode(13, OUTPUT);
pinMode(12, INPUT);
 digitalWrite(12,1);



lcd.begin(16,2);

}

void loop()
{
  
  if(digitalRead(12)==0){
  	digitalWrite(13,0);
  }
if( currentposition==0)
{
displayscreen();

}
int l ;
char code=keypad.getKey();
if(code!=NO_KEY)
{
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Code:");
lcd.setCursor(7,1);
lcd.print(" ");
lcd.setCursor(7,1);
for(l=0;l<=currentposition;++l)
{

lcd.print("*");

}

if (code==password[currentposition])
{
++currentposition;
if(currentposition==4)
{

unlockdoor();
currentposition=0;

}

}

else
{

incorrect();
currentposition=0;

}


}

}



void unlockdoor()
{
delay(900);
digitalWrite(13,1);
lcd.setCursor(0,0);
lcd.println(" ");
lcd.setCursor(1,0);
lcd.print("Authorized");
lcd.setCursor(4,1);
lcd.println("Gate Open");
lcd.setCursor(15,1);
lcd.println(" ");
lcd.setCursor(16,1);
lcd.println(" ");
lcd.setCursor(14,1);
lcd.println(" ");
lcd.setCursor(13,1);
lcd.println(" ");



delay(2000);




}



void incorrect()
{
delay(500);
lcd.clear();
lcd.setCursor(1,0);
lcd.print("Password");
lcd.setCursor(10,0);
lcd.print("Wrong");
lcd.setCursor(15,1);
lcd.println(" ");
lcd.setCursor(4,1);
  delay(2000);
  lcd.clear();
lcd.println("Unauthorized");

lcd.setCursor(13,1);
lcd.println(" ");
Serial.println("Try Again");

delay(3000);
lcd.clear();

displayscreen();
}

void clearscreen()
{
lcd.setCursor(0,0);
lcd.println(" ");
lcd.setCursor(0,1);
lcd.println(" ");
lcd.setCursor(0,2);
lcd.println(" ");
lcd.setCursor(0,3);
lcd.println(" ");
}

void displayscreen()
{

lcd.setCursor(0,0);
lcd.println("Input Password");
lcd.setCursor(1 ,1);

}
