#include <DHT.h>

#define DHTPIN 4       // Pin D4 del ESP32
#define DHTTYPE DHT11  // Tipo de sensor DHT11

DHT dht(DHTPIN, DHTTYPE);  // Inicializar el sensor

void setup() {
  Serial.begin(9600);  // Iniciar la comunicación serial
  dht.begin();         // Iniciar el sensor
}

void loop() {
  delay(700);
  float h = dht.readHumidity();             // Leer la humedad relativa
  float t = dht.readTemperature();          // Leer la temperatura en grados Celsius
  Serial.println(h);  // Enviar la etiqueta "Humedad: "
  Serial.println(t);  // Enviar la etiqueta "Temperatura: "
}

