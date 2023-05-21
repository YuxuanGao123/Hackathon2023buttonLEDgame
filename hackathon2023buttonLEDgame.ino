long randomNumber;
int button1State;
int button2State;


void setup() { 
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(PD2, OUTPUT);
  pinMode(PD3, OUTPUT);
  pinMode(PD4, OUTPUT);
  pinMode(PD5, INPUT);
  pinMode(PD6, INPUT);
  
}

void loop() {
  digitalWrite(PD2, LOW);
  digitalWrite(PD3, LOW);
  digitalWrite(PD4, LOW);
  delay(500);
  randomNumber = random(1, 4);
  if(randomNumber == 1) {
    digitalWrite(PD2, HIGH);

  }
  else if(randomNumber == 2) {
    digitalWrite(PD3, HIGH);
  }
  else {
    digitalWrite(PD4, HIGH);
  }
  delay(1000);
  button1State = digitalRead(PD5);
  if (button1State == HIGH) {
    digitalWrite(8, HIGH);
  }
  else {
    digitalWrite(8, LOW);
  }

  button2State = digitalRead(PD6);
  // if (button2State == HIGH) {
    digitalWrite(10, HIGH);
  //   Serial.println(1);
  // }
  // else {
  //   digitalWrite(10, LOW);
  //   Serial.println(0);
  // }
 }