char button;

void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);  //right motor
  pinMode(11,OUTPUT);   //right motor
  pinMode(10,OUTPUT);   //left motor
  pinMode(9,OUTPUT);    //left motor
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   if(Serial.available()){
      button=Serial.read();
      digitalWrite(13,HIGH);
   }
   if(button=='F'){
    //move forward
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
   }
   if(button=='B'){
    //move backward
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
   }
   if(button=='R'){
    //move right
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
   }
   if(button=='L'){
    //move left
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
   }
   if(button=='S'){
    //stop
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
   }
   delay(100);
}
