const int buzzerPin = 10;   
const int flexPin = A0; 

int value; 

void setup(){
  pinMode(buzzerPin, OUTPUT);  
  Serial.begin(9600);       
}

void loop(){
  value = analogRead(flexPin);        
  Serial.println(value);              
  if (value > 810)
  {
    digitalWrite(buzzerPin, HIGH);
  }
  else if (value < 760)
  {
    digitalWrite(buzzerPin, HIGH);
  }
  else 
  {
    digitalWrite(buzzerPin, LOW);
  }
            //Send PWM value to led
  delay(100);                          
}
