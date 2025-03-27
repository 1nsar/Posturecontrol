const int buzzerPin = 10;
const int flexPin = A0;

int value;
int maxLimit = 810;
int minLimit = 760;

void setup() {
    pinMode(buzzerPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    value = analogRead(flexPin);
    Serial.println(value);

    if (value > maxLimit || value < minLimit) {
        digitalWrite(buzzerPin, HIGH);  // Activate the buzzer 
    } else {
        digitalWrite(buzzerPin, LOW);   // Turn off the buzzer 
    }

    delay(100);
}
