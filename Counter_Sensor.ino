int Count = 0;
void setup() {
  Serial.begin(9600);
  pinMode(INPUT, 9);
  }

void loop() {
  int sensor_Value = digitalRead(9);
  
  if (sensor_Value == HIGH) {
    Count ++;
    Serial.print("Count = ");
    Serial.println(Count);
    delay(500);
    
  }
}
