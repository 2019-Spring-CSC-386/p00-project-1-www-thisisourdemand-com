# P00: Project 1
*Our initial device idea is: a light, audio, and motion sensor to control light brightness.*
*LightBrightsupreme for short*

**Author(s)**: *Noah Dehart and Rodney Grant *
**Google Document**: *https://docs.google.com/document/d/1AMVVuYMBYDSz7zLGW5eV8VUxL8aHxoK7N7UwnTj3HR8/edit?usp=sharing*

---
## Initial Purpose
*plugs into an outlet and lets the lights/lamp plug into it. it has a sensor that senses how much light is in it's
area of the room and adjusts the light acordingly. the goal is to have three or four of these lamps in a room and have
them talk to each other so that they turn off together. the product will have differnt
modes as well, one for even brightness and another for motion sensor dimming. the motion sensor dimming mode would 
increase the light while you are near differnet lamps. the motion sensor dimming mode would save electricity while the perfect brightness mode can be asthetic*

*The LDRs that we will be using are probably not as acurate as we initialy thought, because of this the light will probably not be able to transition its brightness levels fluidly. A solution to this is having three light levels that it can transition through (low light, med light, high light).*

## Final Purpose
*The final purpose of this project is to have a product that will know when someone is in a room and if that room is dark or lit. It will turn on a lamp when there is a person active in the room and the room was previously dark. This project will conserve engergy by only turning on lights as needed.*
---
## Initial Design Plan

*At first we had several ideas and almost all of them had the same time of sensors that we wound up using. Out of the four original ideas we had through brainstorming sessions, three used light and motion sensors. One was a lazer cat toy that would detect motion and move a lazer around to avoid the movement while another project idea  was ment to keep the lights on at deep green by sensing when the lights went out and moving something large enought to activate the motion sensors of the room. The last project idea that we did not go with was a braclet that unlocked and locked your computer based off distance. 
  We eventualy went with a plugin to an outlet that would sense when it was dark and had movemnt in the room. this would promt the light to turn on. Initialy we wanted the light to dim based on where the person in the room was. Meaning that if the person was closer to the sensors then the light would be brighter. If there were several lights in a room hooked up to several of our plugins, it would give adiquite lighting around the room (and look pretty cool). We had to pivot because of hardware limitations, we decided to have the light just turn on and off based on conditions that we give it and the stemuli in the room.

List of hardware components:
- LDR (light dependent resistor)
- pir motion detector
- sound sensor
- ultra sonic sensor
- arduino
- pcb board
- ## Needed: 
- Receptor
- Plugin cable for lightbulb
- electrical Outlet with box
- Surge protector
---
## Files
- photocell.png - This file is a diagram we found online displaying the layout of a basic photocell circuit and how to connect it, it is a source for us. 
- Arduino-with-PIR-motion-sensor-schematics.jpg - This file is a diagram we found online displaying the layout of a basic PIR motion sensor circuit and how to connect it, it is a source for us. 
- Motion_Sensor_in_Progress.ino - This file is our code from when we were modifying and figuring out the workings of some code from randomnerdtutorials.com, it is for a motion sensor that we are no longer using and is no longer necesary.
- Photocell_In_Progress.ino - This file is our code from when we were modifying and figuring out the workings of some code from learn.adafruit.com, this code has been heavily modified and is in our main code file, so it is no longer necesary. 
- Relay_controller.ino - This file is our main code file and is the only file necesary to our projects running, we have compiled code from 3 different sources and modified them to work together and be more efficient, this is the code on our arduino.
---
# Summary
- Our project was designed to act as a power efficient light as that was an issue we deemed needed fixing in buildings outside of the school as we are now used to motion lights. Our project howeve went through many changes as we worked on it. We had to make these changes, ither as a result of a lack of time or necesity. For the project we originally had a PIR Motion sensor as a part of the project, however this had to be removed as this device was one we were not familiar with and in the necesity of time we decided to use an ultrasonic range finder as this device can fulfill most of the functions of the other device and we are familiar with this device and did not need help with it. We also got rid of the microphone as a component as it required a lot of extra work while not adding much to the device and Scott deemed it unncecesary and that without it the project was fine. As for the rest of it, it only evolved in that we descerned the means by which they would be utilized and that our dimming feature could not be accomplished with the components we had at our disposal, though if we had the component, we are readily able to integrate it into the logic of our system.   
---
## Instructions 
- There are not many steps to using our device, simply plug your lamp into our outlet adapter and when the room is dark and you walk in the light will come on. Note it only comes on when it is both dark and there has been someone walk by it, or be within it's range within the last 30 minutes. If either of these criteria were not met the light will not come on. 
---
## Errors and Constraints
*The main constraints that we faced involved hardware. The hardware that we would have needed for multiple lights that dimmed together based off of distance and light would have been posible but the cost and time needed was unrealistic for this project. If given more time we probably would have attempted to have a dimmer mode. There were not too many issues involving errors since we took a direct route to our end product and did not use much more than our own code and example code. 

## To note the only weaknesses we know of our device are
- If the appliance is made to turn on or off repeatedly within a few seconds it will continue flickering between on and off repeatedly a few more times after you have stopped making it do so until it gets it's bearings. 
- The device cannot test for a range of area around it only within a certain line in front of it, this works for turning on if someone walks past it, but not if you don't stay in that line, as in 30 minutes or an hour it will turn off if you are in the room but are not in front of it.

--- 
## References 
Photocell: base code from by lady Ada from adafruit - https://learn.adafruit.com/photocells/arduino-code
Pir motion sensor: base code by Rui Santos from randomnerdtutorials - https://randomnerdtutorials.com/arduino-with-pir-motion-sensor/
Receptor and how to connect an outlet to an arduino diagram - http://www.circuitbasics.com/build-an-arduino-controlled-power-outlet/
Relay information and how to control one - https://maker.pro/arduino/projects/arduino-lamp-dimmer

## Final Self-Evaluations

### Ideation, Brainstorming, Design:

*Noah: 5*

*Rodney: 5*

### Code creation: 

*Noah: 3*

*Rodney: 7*

### Documentation creation:

*Noah: 6*

*Rodney: 4*

### Teamwork & Participation:

*Noah: 5*

*Rodney: 5*
