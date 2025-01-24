int enableAPin = 3;
int inlPin  = 4;
int in2Pin = 5;


void setup()
{

 pinMode(enableAPin, OUTPUT);
 pinMode(inlPin, OUTPUT);
 pinMode(in2Pin, OUTPUT);

}

void loop()
{

int motorPWMSpeed = 0;
int joystickValue = analogRead(A0);

if (joystickValue >= 530)
{
 
  motorPWMSpeed =map(joystickValue, 503,  1023,  0, 255);
  digitalWrite(inlPin, HIGH);
  digitalWrite(in2Pin, LOW);
  digitalWrite(enableAPin, motorPWMSpeed);
}
 else if (joystickValue <=490)
{

 motorPWMSpeed =map(joystickValue, 490,  0,  0, 255);
  digitalWrite(inlPin, LOW);
  digitalWrite(in2Pin, HIGH);
  digitalWrite(enableAPin, motorPWMSpeed);
}
else
{
 digitalWrite(inlPin, LOW);
 digitalWrite(in2Pin, LOW);
    }
  
  }












































