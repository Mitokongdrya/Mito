void blink() {
  for (int i = 0; i < 10; i++) {
    CircuitPlayground.setPixelColor(i, 255, 255, 255);
  }
  delay(100);
  CircuitPlayground.clearPixels();
  delay(100);
}

void winLights() {
  int r = random(255);
  int g = random(255);
  int b = random(255);
  delay(100);
  for (int i = 0; i < 10 && instStop == 0; i++) {
    CircuitPlayground.setBrightness(5);
    CircuitPlayground.setPixelColor(i, 255 - r, 255 - g, 255 - b);
    delay(100);
  }
}


void gameButton() {
  leftFlag = 1;
}

void controlButton() {
  rightFlag = 1;
}


void generateMIDI() {
  for (int x = 0; x < 127; ++x) {
    midi[x] = (A_four / 32.0) * pow(2.0, ((x - 9.0) / 12.0));
    Serial.println(midi[x]);
  }
}