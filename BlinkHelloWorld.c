/*
  Blinks "Hello, World. I am the Intel Edison." in Morse code.
  Turns an LED on the board on and off to display the above message.

  based on the original "Blink" code
  by Scott Fitzgerald (this code loops an On/Off blinking cycle infinitely).
  modified 21 Aug 2015
  by Samuel Axelrod to output messages.

  You may reuse and modify this code but please give credit where it is due.
 */

#define AFTERLETTER 750
#define AFTERWORD 2000
#define AFTERMESSAGE 5000
#define DOT 250
#define LINE 500

// the setup function runs once when you press reset or power the board
void setup()
{
    // initialize digital pin 13 as an output.
    pinMode(13, OUTPUT);
}

// this function performs the blinking of "dot" values
void dotBlinker()
{
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(DOT);              // wait for a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(DOT);
}

// this function performs the blinking of "line" values
void lineBlinker()
{
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(LINE);              // wait for a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(LINE);              // wait for a second
}

// the loop function runs over and over again forever
void loop()
{

    /* This program prints out "Hello, World. I am the Intel Edison." in Morse code
     using the onboard LED.

     When using Morse code on this device, we will use the following setup:
      a . has a delay of 250
      a - has a delay of 500
      between each character is a delay of 750
      between each word is a delay of 2000
      at the end of the file is a delay of 5000 before looping from start

      The above statement would be translated into
      Hello -> .... . .-.. .-.. ---
      World -> .-- --- .-. .-.. -..

      I -> ..
      am -> .- --
      the -> - .... .
      Intel -> .. -. - . .-..
      Edison -> . -.. .. ... --- -.

     As you can see, the code is extremely easy to modify to output whatever message you want.
     */

    // First we will start out with the word "Hello"
    // H
    for(int i=0; i<4; i++)
    {
        dotBlinker();
    }        // turn the LED off by making the voltage LOW
    delay(AFTERLETTER);

    // e
    dotBlinker();
    delay(AFTERLETTER);

// l
    dotBlinker();
    lineBlinker();
    for (int i=0; i<2; i++)
    {
        dotBlinker();
    };
    delay(AFTERLETTER);

    // l
    dotBlinker();
    lineBlinker();
    for (int i=0; i<2; i++)
    {
        dotBlinker();
    };
    delay(AFTERLETTER);

    // o
    for (int i=0; i<3; i++)
    {
        lineBlinker();
    };

    //break between words with delay(1000)
    delay(AFTERWORD);

    // W
    dotBlinker();
    for (int i=0; i<2; i++)
    {
        lineBlinker();
    };
    delay(AFTERLETTER);


    // o
    for (int i=0; i<3; i++)
    {
        lineBlinker();
    };
    delay(AFTERLETTER);

    // r
    dotBlinker();
    lineBlinker();
    dotBlinker();
    delay(AFTERLETTER);

    // l
    dotBlinker();
    lineBlinker();
    for (int i=0; i<2; i++)
    {
        dotBlinker();
    };
    delay(AFTERLETTER);

    // d
    lineBlinker();
    for (int i=0; i<2; i++)
    {
        dotBlinker();
    };

    //break between words with delay(1000)
    delay(AFTERWORD);

    // I
    for (int i=0; i<2; i++)
    {
        dotBlinker();
    };

    //break between words with delay(1000)
    delay(AFTERWORD);

    // a
    dotBlinker();
    lineBlinker();
    delay(AFTERLETTER);

    // m
    for (int i=0; i<2; i++)
    {
        lineBlinker();
    };

    //break between words with delay(1000)
    delay(AFTERWORD);

    // t
    lineBlinker();
    delay(AFTERLETTER);

    // h
    for(int i=0; i<4; i++)
    {
        dotBlinker();
    }        // turn the LED off by making the voltage LOW
    delay(AFTERLETTER);

    // e
    dotBlinker();

    //break between words with delay(1000)
    delay(AFTERWORD);

    // I
    for (int i=0; i<2; i++)
    {
        dotBlinker();
    };
    delay(AFTERLETTER);

    // n
    lineBlinker();
    dotBlinker();
    delay(AFTERLETTER);

    // t
    lineBlinker();
    delay(AFTERLETTER);

    // e
    dotBlinker();
    delay(AFTERLETTER);

    // l
    dotBlinker();
    lineBlinker();
    for (int i=0; i<2; i++)
    {
        dotBlinker();
    };

    //break between words with delay(1000)
    delay(AFTERWORD);

    // E
    dotBlinker();
    delay(AFTERLETTER);

    // d
    lineBlinker();
    for (int i=0; i<2; i++)
    {
        dotBlinker();
    };
    delay(AFTERLETTER);

    // i
    for(int i=0; i<2; i++)
    {
        dotBlinker();
    };
    delay(AFTERLETTER);

    // s
    for(int i=0; i<3; i++)
    {
        dotBlinker();
    };
    delay(AFTERLETTER);

    // o
    for(int i=0; i<3; i++)
    {
        lineBlinker();
    };
    delay(AFTERLETTER);

    // n
    lineBlinker();
    dotBlinker();

    //end of statement, delay 5000
    delay(AFTERMESSAGE);
}
