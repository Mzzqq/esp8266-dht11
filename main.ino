#include "DHT.h"
#define DHT11PIN 4

DHT dht(DHT11PIN, DHT11);
void setup()
{
  Serial.begin(115200);
  dht.begin();
}

void loop()
{
  float humi = dht.readHumidity();
  float temp = dht.readTemperature();
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print("ºC, ");
  Serial.print("Humidity: ");
  Serial.printf("%.2f%%\n", humi);

  delay(1000);
}
