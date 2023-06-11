# Engineering 103 Game: Reaction Time

## Author
Josiah Liebert

## Background Information
This code runs a game for the arduino adafruit cpx board. The game is a reaction test. The goal of the game is to stop a light spinning around the LEDs at the correct spot. Upon completion of each level, the lights will spin quicker and quicker. Complete all eight levels to win the game.

## Inputs and Outputs
The imputs used are the left and right buttons. The left button is described as D4 and the right button is D5. The left button is used for the gameplay. When you press the left button, the light stops at the LED that it was on when the button was pressed. The right button is a reset. When you are ready to start from the beginning again, press the right button and it will put you back on the first level. The outputs used are the LEDs and the speaker. The LEDs are used for the gameplay, and are displayed as 0-9, where LED 0 is by GND, and they count up by one counterclockwise, until it reaches LED 9, by 3.3V. The speakers are used for audio feedback, so you know whether or not you advanced to the next level.
 
## Player Rules
Three lights will be spinning together around the circle of LEDs. The goal of the game is to press the left button when the middle light is lighting up LED 7, which is the LED directly adjacent to the right button. If you succeed in lighting up the correct LED, a light pattern, noise pattern, and a voice saying "Plus One" will play signifying that you leveled up. This will cause the light to spin faster. If you fail to match the light to the LED, the game will show you how close you were, and a noise will play signifying that you should try again. After the noise plays, the game will start again, and you can use the left button to try until you get the light. If you complete all eight levels, you win, and something special will happen! If you want to start over, simply press the right button. 

## Acknowledgements
I would like to give a special thanks to Professor Chet Udell for the creation of the midi function used within the game, as well as the continuous support that he has shown in the creation of this game amd throughout the Engineering 103 class as a whole. 

## Contact Information
For questions about the code or game, please contact me at
josiahliebert@gmail.com
