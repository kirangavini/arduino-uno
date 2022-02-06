#define B1 4
#define B2 5
#define B3 6
#define B4 7 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(B1, INPUT);
  pinMode(B2, INPUT);
  pinMode(B3, INPUT);
  pinMode(B4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int D1 = digitalRead(B1);
  int D2 = digitalRead(B2);
  int D3 = digitalRead(B3);
  int D4 = digitalRead(B4);

  if ((D1 == 1) && (D2==0) && (D3==1) && (D4==0)) {
      Serial.println("Data Received");
      delay(1000);
  } else {
      Serial.println("Data Not Received");
      delay(1000);    
  }

}
