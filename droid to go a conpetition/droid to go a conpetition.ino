//Motor 1 a
#define motor1A 2   //pwm
#define motor1B 3 //gpio
#define motor2A 4 //pwm
#define motor2B 5 //gpio


HCSR04 hc(9, 8); //initialisation class HCSR04 (trig pin , echo pin)

int distance = 0;

void setup(void)
{
  Serial.begin(9600);
  //motor1
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  //motor2
  pinMode(motor2A, OUTPUT);
  pinMode(motor2B, OUTPUT);
  delay(4000);

}
void loop(void) {
  /**/

  //distance = hc.dist();
  //Serial.println(distance);
  delay(15x0);
  if (hc.dist() <= 100)
  { 
digitalWrite(motor1A, LOW);
    digitalWrite(motor1B, HIGH);
    digitalWrite(motor2A, LOW);
    digitalWrite(motor2B, HIGH);
  }
  else {
    digitalWrite(motor1A, HIGH);
    digitalWrite(motor1B, LOW);
    digitalWrite(motor2A, LOW);
    digitalWrite(motor2B, LOW);
  }
}


