//msh kamel to be tested
int serial = A0;
int motor_pwm = 9;
int m1=13;
int m2=12;
int sensorValue;
void setup () {
  pinMode(motor_pwm,OUTPUT);
    pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);

  pinMode(serial,INPUT);
  Serial.begin(9600);
}

void loop () {
  
  sensorValue = analogRead(serial);
  delay(1000);
  int digitalValue = map(sensorValue, 0, 1023, 0, 255);
  //Serial.println(digitalValue);
  analogWrite(motor_pwm,digitalValue);
  digitalWrite(m1,1);
    digitalWrite(m2,0);

}
