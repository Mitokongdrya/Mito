# Engineering 103 Game: Reaction Time

## Author
Josiah Liebert

## Background Information
This code runs a game for the Arduino Adafruit Circuit Playground Express (CPX) Board. This game is designed to test your reactions. The goal of the game is to stop a light spinning around the LEDs at the correct spot. Upon completion of each level, the lights will spin quicker and quicker. Complete all ten levels to win the game.

## Inputs and Outputs
The imputs used are Button A (D4) and Button B (D5). Button A is used for the gameplay. When you press Button A, the light stops at the LED that it was on when the button was pressed. Button B is a reset. When you are ready to start from the beginning again, press Button B, and it will put you back on the first level. The outputs used are the LEDs and the speaker. The LEDs are used for the gameplay, and are displayed as 0-9, where LED 0 is the closest to the On light, and they count up by one counterclockwise, until it reaches LED 9, right next to D13. The speakers are used for audio feedback in the forms of both sound and speech, so you know whether or not you advanced to the next level.
 
## Player Rules
Three lights will be spinning together around the circle of LEDs. The goal of the game is to press the Button A when the middle light of the three spinning lights is lighting up LED 7, which is the LED directly adjacent to Button B. If you succeed in lighting up the correct LED, a light pattern, noise pattern, and a voice saying "Plus Five Points" will play signifying that you leveled up. This will cause the light to spin faster. If you fail to match the light to the LED, the game will show you how close you were, and a voice saying "Minus One Point" will play. After the speech plays, the game will start again, and you can use the Button A to try again. If you level up 10 times, then you have completed the game.

You get an unlimited amount of attempts to complete the game, but fewer attempts is better. For each time that you level up, you recieve +5, but for each time that you try to level up and fail, you recieve -1. The score is displayed on the Serial Monitor. Additionally, when you first the end of the game, the number of LEDs that light up corresponds with your overall score. The maximum score is 50. Good luck and I hope you have fun!

## Acknowledgements
I would like to give a special thanks to Professor Chet Udell for the creation of the midi function used within the game, as well as the continuous support that he has shown in the creation of this game amd throughout the Engineering 103 class as a whole. Also, thank you to Peter Knight and his Talkie library, which was used to implement the speech in this game.

## Contact Information
For questions about the code or game, please contact me at
josiahliebert@gmail.com
