// C++ code 
// Night lamp
int led1=13;
void setup()
{
  Serial.begin (9600);
  pinMode(led1, OUTPUT);
}

void loop()
{
  int c = analogRead(A3);
  Serial.println(c);
  if(c<800)
  {
    digitalWrite(led1,LOW);
  }
  else
  {
    digitalWrite(led1,HIGH);
  }
}