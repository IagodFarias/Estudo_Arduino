// Componente: Arduino uno + resistor + LED 
// O resistor deve ser conectado no terminal positivo do LED, que por convenção é o seu terminal maior.

int LED = 12;

void setup()
{

pinMode(LED, OUTPUT); // define o LED como saída.

}
void loop()
{

digitalWrite(LED, HIGH); //liga o LED
delay(1000);
digitalWrite(LED, LOW); // desliga o LED
delay(1000);

}