void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);
  Serial.println(String(val));
  if (val < 500)
  {
    digitalWrite(13, HIGH);
  }   
  else
  {
    digitalWrite(13, LOW);    
  }
  delay(1000);
}
