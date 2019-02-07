# P00: Project 1
*Our initial device idea is: a light, audio, and motion sensor to control light brightness.*
*LightBrightsupreme for short*

**Author(s)**: *Noah Dehart and Rodney Grant *
**Google Document**: *https://docs.google.com/document/d/1AMVVuYMBYDSz7zLGW5eV8VUxL8aHxoK7N7UwnTj3HR8/edit?usp=sharing*

---
## Purpose
*plugs into an outlet and lets the lights/lamp plug into it. it has a sensor that senses how much light is in it's
area of the room and adjusts the light acordingly. the goal is to have three or four of these lamps in a room and have
them talk to each other so that they turn off together. the product will have differnt
modes as well, one for even brightness and another for motion sensor dimming. the motion sensor dimming mode would 
increase the light while you are near differnet lamps. the motion sensor dimming mode would save electricity while the perfect brightness mode can be asthetic*

*The LDRs that we will be using are probably not as acurate as we initialy thought, because of this the light will probably not be able to transition its brightness levels fluidly. A solution to this is having three light levels that it can transition through (low light, med light, high light).*


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

  
  ## Sources of code and diagrams 
Photocell: base code from by lady Ada from adafruit - https://learn.adafruit.com/photocells/arduino-code
Pir motion sensor: base code by Rui Santos from randomnerdtutorials - https://randomnerdtutorials.com/arduino-with-pir-motion-sensor/
Receptor and how to connect an outlet to an arduino diagram - http://www.circuitbasics.com/build-an-arduino-controlled-power-outlet/ 

Relay information and how to control one - https://maker.pro/arduino/projects/arduino-lamp-dimmer
