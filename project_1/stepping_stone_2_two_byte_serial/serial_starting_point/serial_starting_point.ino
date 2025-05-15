int Byte1 = 0, Byte2 = 0;
int data1 = 0;

void setup()                    // run once, when the sketch starts
{
  Serial.begin(115200);           // set up Serial library at 115200 bps  
  Serial.print("EGR 445 Serial Starting Point");  // prints welcome message
  Serial.print('\n');  // prints newline character
}

void loop()                       // run over and over again
{
  if (Serial.available() > 1) {
    Byte1 = Serial.read();
    Byte2 = Serial.read();
    Serial.print(Byte1);
    Serial.print(",");
    Serial.print(Byte2);
    Serial.print('\n');
    delay(100);
  }
}
