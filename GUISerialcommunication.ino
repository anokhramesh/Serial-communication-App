//GUI serial communication
String data;
char  d1;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}
void loop()
{
  if (Serial.available())
  {
    data = Serial.readString();
    d1 = data.charAt(0);
    if (d1 == 'A') {
      digitalWrite(13, HIGH);
    }
    else if (d1 == 'a') {
      digitalWrite(13, LOW);
    }
  }
}
