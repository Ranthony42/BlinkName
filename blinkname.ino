int led1 = D0; // Instead of writing D0 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

int Dot = 500;             // Time takes for dot
int Dash = 5000 ;             // time takes for dash
int letter =300;            // time between letter
int symbol = 100;           // time between symbol

void setup() {

  // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

  // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void dot()
{
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(Dot);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
}

void dash()
{
    digitalWrite(led1, HIGH);
    digitalWrite(led2,HIGH);

    delay(Dash);

    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

}

// This it the code in morse to write LOUIS.
void loop()
{
    dot();               // For L
    delay(symbol);
    dash();
    delay(symbol);
    dot();
    delay(symbol);
    dot();

    delay(letter);

    dash();               // For O
    delay(symbol);
    dash();
    delay(symbol);
    dash();

    delay(letter);

    dot();                 // For U
    delay(symbol);
    dot();
    delay(symbol);
    dash();

    delay(letter);

    dot();                // For I
    delay(symbol);
    dot();

    delay(letter);

    dot();                // For S
    delay(symbol);
    dot();
    delay(symbol);
    dot();

    delay(letter);
}
