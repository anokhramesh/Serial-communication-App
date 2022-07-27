//GUI serial communication
String data;// variable data is string type
char  d1;// variable di is char type
void setup()
{
  Serial.begin(9600);// baud rate for serial communication
  pinMode(13, OUTPUT);// set digital pin 13 as an output
}
void loop()
{
  if (Serial.available())// checking any data is available is available on serial
  {
    data = Serial.readString();// serialdata will store to data variable
    d1 = data.charAt(0);//d1 variable will store the character available
    if (d1 == 'A') {// if caracter is capital A- turn ON the LED
      digitalWrite(13, HIGH);
    }
    else if (d1 == 'a') {// if caracter is capital a- turn OFF the LED
      digitalWrite(13, LOW);
    }
  }
}
