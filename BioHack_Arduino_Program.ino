const int joyX = 0;
const int joyY = 1;
int xValue;
int yValue;
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  xValue = analogRead(joyX)-503;
  yValue = analogRead(joyY)-485;
 
  //print the values with to plot or view
  Serial.print(xValue);
  Serial.print("\t");
  Serial.println(yValue);

  if (xValue >= 260) {
    digitalWrite(13, HIGH);
  
  }

  else {
    digitalWrite(13, LOW);
  }
}
