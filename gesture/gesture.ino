void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int xaxis = analogRead(A1);
  int yaxis = analogRead(A2);
  Serial.println("The value of Xaxis is "+ String(xaxis));
  Serial.println("The value of Yaxis is "+ String(yaxis));
  delay(1000);

  if(xaxis < 300) 
  {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    Serial.println("Robot is moving Forward");
  }

  if(xaxis > 350) 
  {
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    Serial.println("Robot is moving Backward");
  }

  if(yaxis < 300) 
  {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    Serial.println("Robot is turning left");
  }

  if(yaxis > 350) 
  {
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    Serial.println("Robot is turning right");
  }

  if ((xaxis > 300) && (xaxis < 350) && (yaxis > 300) && (yaxis < 350)) {
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    digitalWrite(13, LOW);
    Serial.println("Robot is stopping");
  }


}
