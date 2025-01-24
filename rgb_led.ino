const int r_led = 11;
const int g_led = 10;
const int b_led = 9;



void setup()  
{

   pinMode(r_led , OUTPUT);
   pinMode(g_led , OUTPUT);
   pinMode(b_led , OUTPUT);

  
}

void loop()
 
{

  digitalWrite(r_led , HIGH);
  digitalWrite(g_led , LOW);
  digitalWrite(b_led , LOW);

  delay(500);

  digitalWrite(r_led , LOW);
  digitalWrite(g_led , HIGH);
  digitalWrite(b_led , LOW);

  delay(500);

  digitalWrite(r_led , LOW);
  digitalWrite(g_led , LOW);
  digitalWrite(b_led , HIGH);

  delay(500);

  digitalWrite(r_led , HIGH);
  digitalWrite(g_led , HIGH);
  digitalWrite(b_led , LOW);

  delay(500);

  digitalWrite(r_led , LOW);
  digitalWrite(g_led , HIGH);
  digitalWrite(b_led , HIGH);

  delay(500);

  digitalWrite(r_led , HIGH);
  digitalWrite(g_led , LOW);
  digitalWrite(b_led , HIGH);

  delay(500);

  digitalWrite(r_led , HIGH);
  digitalWrite(g_led , HIGH);
  digitalWrite(b_led , HIGH);
  
 
  delay(500);





}

