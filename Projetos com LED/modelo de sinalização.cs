



int RED = 4;
int GREEN = 3;
int YELLOW = 2; 
int button = 5;

void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(YELLOW, OUTPUT);
pinMode(button, INPUT);

}

void loop()
{

flash(LED1, 500); flash(LED2, 500); flash(LED3, 500);

}

void flash(int LED, int duration)
{

digitalWrite(LED, HIGH);
delay(duration);
digitalWrite(LED, LOW);
delay(duration);

}