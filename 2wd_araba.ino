#define echopin 13
#define trigpin 12
#define motorR1 7
#define motorR2 6
#define motorRe 9
#define motorL1 4
#define motorL2 5
#define motorLe 3





long sure, uzaklik;




void setup() {

  pinMode(echopin,INPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(motorR1,OUTPUT);
  pinMode(motorR2,OUTPUT);
  pinMode(motorRe,OUTPUT);
  pinMode(motorL1,OUTPUT);
  pinMode(motorL2,OUTPUT);
  pinMode(motorLe,OUTPUT);





}

void loop() {

  digitalWrite(trigpin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigpin,HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

   sure = pulseIn(echopin,HIGH);
   uzaklik =sure /29.1/2;
   

   if(uzaklik < 15)

  {
    
     geri();
     delay(500);
     sag();
     delay(500);


  }
   else{
     ileri();
  }  



}

void geri(){

  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, HIGH);
  digitalWrite(motorRe,150);



  digitalWrite(motorL1, LOW);
  digitalWrite(motorL2, HIGH);
  digitalWrite(motorLe,150);

}


void ileri(){

  digitalWrite(motorR1, HIGH);
  digitalWrite(motorR2, LOW);
  digitalWrite(motorRe,150);



  digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, LOW);
  digitalWrite(motorLe,150);

}


  void sag(){

  digitalWrite(motorR1, LOW);
  digitalWrite(motorR2, HIGH);
  digitalWrite(motorRe,150);



  digitalWrite(motorL1, HIGH);
  digitalWrite(motorL2, LOW);
  digitalWrite(motorLe,150);



}



















































































































































































































































































































































































































































