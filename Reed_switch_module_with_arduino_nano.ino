int relay = 5; // define the LED pin
int digitalPin = 3; // KY-025 digital interface
int analogPin = A0; // KY-025 analog interface
int digitalVal; // digital readings
int analogVal; //analog readings

void setup()
{
  pinMode(relay, OUTPUT);
  pinMode(digitalPin, INPUT);
  pinMode(analogPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  if(digitalVal == HIGH) // if magnetic field is detected
  {
    digitalWrite(relay, HIGH); // turn ON Arduino's LED
  }
  else
  {
    digitalWrite(relay, LOW); // turn OFF Arduino's LED
  }

  // Read the analog interface
  analogVal = analogRead(analogPin); 
  Serial.println(analogVal); // print analog value to serial

  delay(100);
}
