void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorSwitch = analogRead(A0);
  int sensorLight = analogRead(A2);
  bool active = false;
  

  if (sensorSwitch > 500)
  {
    Serial.println("On");
    active = true;
    if (active = true && sensorLight > 100)
    {
      Serial.println("Buzzer and light on");
      Serial.println(sensorLight);
      digitalWrite(A2, LOW);
      digitalWrite(4, HIGH);
    }
    else
    {
      active = false;
      Serial.println("Buzzer and light off");
      Serial.println(sensorLight);
      digitalWrite(A2, LOW);
      digitalWrite(4, LOW);
      
      
    }
  }
  else
  {
    Serial.println("Off");
    active = false;
    digitalWrite(4, LOW);
    digitalWrite(A2, LOW);
    delay(1);
  }
  delay(1);
}
