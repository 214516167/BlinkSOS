/*
  SOS
  Written by Jeremy Mercer
  214516167

  Pulses the LED on the Arduino board to prouce morse code signals.
  
  Functions:
  mShort() produces the short symbol
  mLong() produces the long symbol
  mBreak() produces a space between words
  mLetter() converts a letter from A-Z to the appropriate morse pattern
  mMessage() converts a string to morse code
  
*/

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  String message = "SOS";
  mMessage(message);
}

void mShort() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

void mLong() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

void mBreak() {
  delay(300);
}

void mLetter(char letter) {
  switch(letter){
    case ' ':
    mBreak();
    case 'a':
    mShort();
    mLong();
    break;
    case 'b':
    mLong();
    mShort();
    mShort();
    mShort();
    break;
    case 'c':
    mLong();
    mShort();
    mLong();
    mShort();
    break;
    case 'd':
    mLong();
    mShort();
    mShort();
    break;
    case 'e':
    mShort();
    break;
    case 'f':
    mShort();
    mShort();
    mLong();
    mShort();
    break;
    case 'g':
    mLong();
    mLong();
    mShort();
    break;
    case 'h':
    mShort();
    mShort();
    mShort();
    mShort();
    break;
    case 'i':
    mShort();
    mShort();
    break;
    case 'j':
    mShort();
    mLong();
    mLong();
    mLong();
    break;
    case 'k':
    mLong();
    mShort();
    mLong();
    break;
    case 'l':
    mShort();
    mLong();
    mShort();
    mShort();
    break;
    case 'm':
    mLong();
    mLong();
    break;
    case 'n':
    mLong();
    mShort();
    break;
    case 'o':
    mLong();
    mLong();
    mLong();
    break;
    case 'p':
    mShort();
    mLong();
    mLong();
    mShort();
    break;
    case 'q':
    mLong();
    mLong();
    mShort();
    mLong();
    break;
    case 'r':
    mShort();
    mLong();
    mShort();
    break;
    case 's':
    mShort();
    mShort();
    mShort();
    break;
    case 't':
    mLong();
    break;
    case 'u':
    mShort();
    mShort();
    mLong();
    break;
    case 'v':
    mShort();
    mShort();
    mShort();
    mLong();
    break;
    case 'w':
    mShort();
    mLong();
    mLong();
    break;
    case 'x':
    mLong();
    mShort();
    mShort();
    mLong();
    break;
    case 'y':
    mLong();
    mShort();
    mLong();
    mLong();
    break;
    case 'z':
    mLong();
    mLong();
    mShort();
    mShort();
    break;
  }
  delay(100);
}

void mMessage(String message) {
  message.toLowerCase();
  for(int i = 0; i < message.length(); i++){
    char letter = message.charAt(i);
    mLetter(letter);
  }
  mBreak();
}

