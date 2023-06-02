#include <Adafruit_CircuitPlayground.h>

float temp, volume;
float midi[127];
int A_four = 440;

int major[8] = { 60, 62, 64, 65, 67, 69, 71, 72 };

void setup() {

  Serial.begin(9600);
  CircuitPlayground.begin();
  generateMIDI();
}

void loop() {

  volume = CircuitPlayground.mic.soundPressureLevel(50);
  temp = CircuitPlayground.temperatureF();

  if (volume > 80) {
    noise();
  } else if (temp > 67 && temp < 75) {
    green();
  } else if (temp >= 75) {
    red();
  } else {
    blue();
  }
}

void green() {
  delay(1);
  Serial.println("Perfect Temp :D");
  Serial.print("The current temperature is ");
  Serial.println(temp);
  for (int i = 0; i < 10; i++) {
    CircuitPlayground.setPixelColor(i, 0, 255, 0);
  }
}

void red() {
  delay(1);
  Serial.println("Drink more water :<");
  Serial.print("The current temperature is ");
  Serial.println(temp);
  for (int i = 0; i < 10; i++) {
    CircuitPlayground.setPixelColor(i, 255, 0, 0);
  }
}

void blue() {
  delay(1);
  Serial.println("A bit chilly");
  Serial.print("The current temperature is ");
  Serial.println(temp);
  for (int i = 0; i < 10; i++) {
    CircuitPlayground.setPixelColor(i, 0, 0, 255);
  }
}

void noise() {
  Serial.println("Be Quiet Please :)");
  Serial.print("Your noise level is ");
  Serial.println(volume);
  for (int i = 0; i < sizeof(major) / sizeof(major[0]); i++) {
    CircuitPlayground.playTone(midi[major[i]], 100);
    for (int i = 0; i < 10; i++) {
      CircuitPlayground.setPixelColor(i, 255, 255, 255);
    }
    CircuitPlayground.clearPixels();
    delay(1);
  }
}

void generateMIDI() {
  for (int x = 0; x < 127; ++x) {
    midi[x] = (A_four / 32.0) * pow(2.0, ((x - 9.0) / 12.0));
    Serial.println(midi[x]);
  }
}