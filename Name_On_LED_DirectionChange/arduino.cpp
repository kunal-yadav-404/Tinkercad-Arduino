
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int count1=0;
int count2=0;
int count3=0;

void setup() {
 
  lcd.begin(16, 2);

  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(9,0);
  
}

void loop() {
	
  if(digitalRead(7) == 1){
   
    if(count1==0){
       lcd.clear();
      lcd.print("Kunal Yadav");
    count1++;
      count2=0;
      count3=0;
    }
  }else if(digitalRead(8) == 1){
    
  if(count2==0){
    lcd.clear();
     lcd.print("Yadav Kunal");
    count2++;
    count1=0;
    count3=0;
    }
    
  }else if(digitalRead(9) == 1){
     if(count3==0){
    lcd.clear();
    count3++;
    count1=0;
     count2=0;
    }
    
  }
}

