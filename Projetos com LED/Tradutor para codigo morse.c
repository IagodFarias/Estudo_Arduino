

/*  Alguma definições:
    funções de comunicação serial - servem para fazer a comunicação entre o arduino e o computador ou entre o arduino e outro dispositovo.
    baud rate - taxa de envio em  bits por segundo.
    
    Serial.begin() - define o boud rate
    Serial.available() - Retorna a quantidades de bytes disponíveis para leitura no buffer de leitura.
    Serial.read() - Lê o byte mais recente apontado no buffer de entrada da serial.
   

*/


char* letters[] = {
".-", "-...", "-.-.", "-..", ".", "..-.","--.", "....", "..", //A - I
".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", // J- R
"...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." // S - Z
};

int dotdelay = 200;
int LED = 12;

void setup()
{
pinMode(LED, OUTPUT);
Serial.begin(9600);
}

void loop()
{
char ch;
    if(Serial.available()) // há algo para ser lido pelo usb?
    {
    ch = Serial.read();
    if(ch >= 'a' && ch <= 'z')                              // não entendi essa parte
        {
            flashSequence(letters[ch - 'a']);
        }
    else if (ch >= 'A' && ch <= 'Z')
        {
            flashSequence(letters[ch - 'A']); 
        }
    else if (ch == ' ') delay(dotdelay * 4); //espaço entre as palavras
    }
}

void flashSequence(char* sequence)
{
   int i = 0;
   while (sequence[i] != NULL)
    {
        flashDotOrDash(sequence[i]);
        i++;
    }
    delay(dotdelay*3); // espaço entre as letras
}

void flashDotOrDash(char dotOrDash)
{
    digitalWrite(LED, HIGH);
    if(dotOrDash == '.')
        {
            delay(dotdelay);
        }
    else
    {
        dotdelay *3;
    }

    digitalWrite(LED, LOW);
    delay(dotdelay);

}