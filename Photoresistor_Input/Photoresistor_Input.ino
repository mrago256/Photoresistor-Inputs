//Michael Rago
//Written 3/4/2019
const int controlPin = A0;
const int redPin = A1;
const int greenPin = A2;
const int bluePin = A3;
int control = 0;
int red = 0;
int green = 0;
int blue = 0;
int controlMap;
int redMap;
int greenMap;
int blueMap;

void setup() {
  Serial.begin(9600);
}

void loop() {
  control = analogRead(controlPin);
  controlMap = map(control, 0, 1023, 0, 20);
  red = analogRead(redPin);
  redMap = map(red, 0, 1023, 0, 20);
  green = analogRead(greenPin);
  greenMap = map(green, 0, 1023, 0, 20);
  blue = analogRead(bluePin);
  blueMap = map(blue, 0, 1023, 0, 20);
  delay (200);
  Serial.print("Control: ");
  Serial.print(controlMap);
  Serial.print("\t Red: ");
  Serial.print(redMap);
  Serial.print("\t Green: ");
  Serial.print(greenMap);
  Serial.print("\t Blue :");
  Serial.println(blueMap);
}

