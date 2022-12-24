// C++ code
// S.O.S = ...---...
// . = piscar por 200 ms
// - = piscar por 500 ms
int LED = 12;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
// S
flash(200); flash(200); flash(200); 
  
// O
flash(500); flash(500); flash(500);
  
// S
flash(200); flash(200); flash(200);
delay(500);
  
}

void flash(int duration)
{
digitalWrite(LED, HIGH); 
delay(duration);
digitalWrite(LED, LOW);
delay(duration); 
}