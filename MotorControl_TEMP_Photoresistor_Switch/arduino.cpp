
int celsius = 0;
int y;
void setup() {
  pinMode(0,INPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(A0, INPUT);
  digitalWrite(7,0);
  digitalWrite(8,0);
 //analogWrite(2,500);
  
  
}
void loop() {
  celsius = map(((analogRead(A0))), 0, 1023, 30, 70);
  y=analogRead(A1);
  int t= map(y,0,1023,0,255);
  Serial.print(t);
	 
  if(digitalRead(7)==1){
  	digitalWrite(8,1);
  }
  
  
   if (celsius > 40)
  {
   digitalWrite(8,0);
  }
  
  if(t==0){
    digitalWrite(8,0);
  }
  
  //delay(200);
}
