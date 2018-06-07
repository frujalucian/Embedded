#define enA 9
#define enB 10
#define in1 6
#define in2 7
#define in3 4
#define in4 5

void setup() {
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  // Set initial rotation direction
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
}

void loop() {
  //int potValue = analogRead(A0); // Read potentiometer value
  //int pwmOutput = map(potValue, 0, 1023, 0 , 255); // Map the potentiometer value from 0 to 255
  analogWrite(enA, 150); // Send PWM signal to L298N Enable pin
  analogWrite(enB, 150); // Send PWM signal to L298N Enable pin
  
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    
    delay(20);
  
}
