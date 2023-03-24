int led = 5;

void setup() 
{
  Serial.begin(115200);
    
  pinMode(led, OUTPUT);


  digitalWrite(led, LOW);
}

void loop() {
  for(int i=10;i<255;i++){
    analogWrite(led,i);
    Serial.println(i);
    delay(100);
  }
  for(int i=255;i>10;i--){
    analogWrite(led,i);
    Serial.println(i);
    delay(100);
  }
}
