#define B1 4
#define B2 5
#define B3 6
#define B4 7 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(B1, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(B4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(B1, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(B3, HIGH);
  digitalWrite(B4, LOW);
  Serial.println("Data Transmitted");
  delay(5000);

}
