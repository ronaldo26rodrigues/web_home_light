int cmd;
bool pisca;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.setTimeout(50);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0) {
    cmd = Serial.parseInt();
    if (cmd == 888) {
      if (digitalRead(9) == HIGH){
        digitalWrite(9, LOW);
      } else {
        digitalWrite(9, HIGH);
      }
    }
    if (cmd == 11) {
      Serial.print("aaa");
      if (digitalRead(10) == HIGH){
        digitalWrite(10, LOW);
      } else {
        digitalWrite(10, HIGH);
      }
    }
    if (cmd == 22) {
      pisca = !pisca;
    }
  }
  if (pisca == true) {
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    delay(500);
  }
  
}
