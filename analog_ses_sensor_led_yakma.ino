#define SensorPin 3
#define MotorPin 5 
int MotorDurum = LOW;
double ses;

void setup() {
 
  pinMode(SensorPin, INPUT);
  pinMode(MotorPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  


ses = analogRead(A0+0);
  Serial.println( ses);

  if(  ses > 100 ){

    

    digitalWrite(MotorPin, HIGH);

  }
  else{

     digitalWrite(MotorPin, LOW);
  }
  
delay(1000);


}

