//A function that displays your score onto the serial monitor
void scoreboard() {
  Serial.print("Your score is ");
  Serial.println(score);
}

//A light and speech function which plays every time that you level up
void lightPlus() {
  for (int i = 0; i < 10; i++) {
    CircuitPlayground.setPixelColor(i, 255, 255, 255);
  }
  delay(100);
  CircuitPlayground.clearPixels();
  delay(100);
}

  void speechPlus() {
    CircuitPlayground.speaker.say(spPLUS);
    CircuitPlayground.speaker.say(spFIVE);
    CircuitPlayground.speaker.say(spPOINT);
    CircuitPlayground.speaker.say(sp_S);
    CircuitPlayground.speaker.end();
  }

  //A light and speech function that plays every time you fail to level up
  void lightMinus() {
    CircuitPlayground.setPixelColor(val, 255, 0, 0);
    CircuitPlayground.setPixelColor(val - 1, 0, 0, 0);
    CircuitPlayground.setPixelColor(val + 1, 0, 0, 0);
  }

  void speechMinus() {
    CircuitPlayground.speaker.say(spMINUS);
    CircuitPlayground.speaker.say(spONE);
    CircuitPlayground.speaker.say(spPOINT);
    CircuitPlayground.speaker.end();
  }

  //A light and speech function that plays every time you complete all of the levels
  void lightComplete() {
    for (int l = 0; l < 7 && !instStop; l++) {
      int r = random(255);
      int g = random(255);
      int b = random(255);
      delay(100);
      for (int i = 0; i < 10; i++) {
        CircuitPlayground.setBrightness(5);
        CircuitPlayground.setPixelColor(i, 255 - r, 255 - g, 255 - b);
        delay(100);
      }
    }
  }

  void speechComplete() {
    CircuitPlayground.speaker.say(spPRESS);
    CircuitPlayground.speaker.say(spBUTTON);
    CircuitPlayground.speaker.say(spB);
    CircuitPlayground.speaker.say(spTWO);
    CircuitPlayground.speaker.say(spTRY);
    CircuitPlayground.speaker.say(spAGAIN);
    CircuitPlayground.speaker.end();
  }

  //A light function that displays your score as the number of LEDs lit up
  void scoreComplete() {
    scoreLight = map(score, 0, 50, 0, 9);
    if (scoreLight < 0) {
      scoreLight = 0;
    }
    for (int s = 0; s < scoreLight; s++) {
      CircuitPlayground.setPixelColor(s, 255, 65, 0);
      delay(100);
    }
    delay(5000);
  }


  //Functions used for interrupts
  void game() {
    FlagA = 1;
  }

  void control() {
    FlagB = 1;
    instStop = 1;
  }

  //
  void generateMIDI() {
    for (int x = 0; x < 127; ++x) {
      midi[x] = (A_four / 32.0) * pow(2.0, ((x - 9.0) / 12.0));
      Serial.println(midi[x]);
    }
  }