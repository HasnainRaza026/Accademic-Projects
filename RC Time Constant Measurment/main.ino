int value = 0;
float voltage;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(A0);
  voltage = value * 5.0/1024;
  Serial.print("voltage = ");
  Serial.println(voltage);
  delay(500);
  }