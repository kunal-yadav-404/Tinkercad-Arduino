// C++ code
//
int a=2,b=3,c=4,d=5;
int led=9;
int s1=7,s2=6;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
}

void loop()
{
  
  if(digitalRead(s2) && digitalRead(s1)){
  digitalWrite(led,0);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(b, LOW);
  digitalWrite(a, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(a, LOW);
  delay(1000); 
  
  digitalWrite(d, LOW);
  digitalWrite(c, 0);
  digitalWrite(b, 1);
  digitalWrite(a, 1);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(d, 0);
  digitalWrite(c, 1);
  digitalWrite(b, 0);
  digitalWrite(a, 0);
  delay(1000);
  
  digitalWrite(d, LOW);
  digitalWrite(c, 1);
  digitalWrite(b, 0);
  digitalWrite(a, 1);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(d, LOW);
  digitalWrite(c, 1);
  digitalWrite(b, 1);
  digitalWrite(a, 0);
  delay(1000);
  
  digitalWrite(d, 0);
  digitalWrite(c, 1);
  digitalWrite(b, 1);
  digitalWrite(a, 1);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(d, 1);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 0);
  delay(1000);
  
  digitalWrite(d, 1);
  digitalWrite(c, 0);
  digitalWrite(b, 0);
  digitalWrite(a, 1);
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(d, 1);
  digitalWrite(c, 0);
  digitalWrite(b, 1);
  digitalWrite(a, 0);
  //delay(1000);
  
  }else{
    digitalWrite(led,1);
  }


}
