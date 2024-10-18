const int IR_SENSOR_pin= 7;
const int LED_pin= 0;
void setup() {
  // put your setup code here, to run once:
pinMode(IR_SENSOR_pin, INPUT);
pinMode(LED_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(IR_SENSOR_pin)==HIGH){
  digitalWrite(LED_pin, HIGH);
} else {
  digitalWrite(LED_pin, LOW);
}
}
