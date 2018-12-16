#include <Thermistor.h>

Thermistor temp(0);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int temperature = temp.getTemp();
  Serial.println(temperature);
  delay(30000);
}
