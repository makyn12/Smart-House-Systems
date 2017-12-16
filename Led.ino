String in, out;
int total = 0;
int ldrPin=A2;
int ldrDeger=0;
int esikDeger=300; // bunun yerine daha uygun bir belirleyebilirsiniz.

void setup() {
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}

void show() {
  if(total>=0){
  Serial.print(total);
    Serial.println(" --> İcerideki kisi sayisi");
  }
}
void loop() {
  ldrDeger=analogRead(ldrPin);
  if(ldrDeger<esikDeger){
  if (digitalRead(7) == LOW) {
    while (digitalRead(8) == HIGH) {
    }
    analogWrite(A1, 255);
    
    Serial.print("Giris Yapildi ");
    total++;
    show();
    delay(1000);
    analogWrite(A1, 0);
  } else if (digitalRead(8) == LOW) {
    while (digitalRead(7) == HIGH) {
    }
    analogWrite(A0, 255);
    Serial.print("Cikis Yapildi ");
    total--;
    show();
    delay(1000);
    analogWrite(A0, 0);
  }
  
  if(total>0){
    digitalWrite(12, HIGH);
    }
    else{
      digitalWrite(12, LOW);
      }
  }else{
    digitalWrite(12, LOW);
     if (digitalRead(7) == LOW) {
    while (digitalRead(8) == HIGH) {
    }
    analogWrite(A1, 255);
    
    Serial.print("Giris Yapildi ");
    total++;
    show();
    delay(1000);
    analogWrite(A1, 0);
  } else if (digitalRead(8) == LOW) {
    while (digitalRead(7) == HIGH) {
    }
    analogWrite(A0, 255);
    Serial.print("Cikis Yapildi ");
    total--;
    show();
    delay(1000);
    analogWrite(A0, 0);
  }
    
    
    
    
    }
}
