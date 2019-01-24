# P00: Project 1
```diff
- Pay attention to Markdown formatting, particularly when you want new paragraphs, which require two line breaks. 
- Remove all help text. 
- A diagram in your initial design plan would help visualize the setup. 
- You have four sensors, all controlling one light. An outline of your code would help clarify what each does, and how coupling is avoided (or not). E.g., How is "motion sensed" plus "middle of the night dark" handled? How about ALL the other permutations?
- You left off the actual lamp as hardware. Also, there's a little more hardware related to your lamp, in particular, how do you keep the 120V AC signal away from your Arduino? HINT: Look up relays. 
- You mention "have three or four of these (light sensors?) talk to each other..." What does that mean?
```
*Our initial device idea is: a light, audio, and motion sensor to control light brightness.*
*LightBrightsupreme for short*

**Author(s)**: *Noah Dehart and Rodney Grant *
**Google Document**: *https://docs.google.com/document/d/1AMVVuYMBYDSz7zLGW5eV8VUxL8aHxoK7N7UwnTj3HR8/edit?usp=sharing*

---
## Purpose
*plugs into an outlet and lets the lights/lamp plug into it. it has a sensor that senses how much light is in it's
area of the room and adjusts the light acordingly. the goal is to have three or four of these in a room and have
them talk to each other so that they all turn off, on or other comands through audio. the product will have differnt
modes as well, one for even brightness and another for motion sensor dimming. the motion sensor dimming mode would 
increase the light while you are near differnet lamps. the motion sensor dimming mode would save electricity while the perfect brightness mode can be asthetic*


## Initial Design Plan

List of hardware components:
- light sensor
- pir motion detector
- sound sensor
- ultra sonic sensor
- arduino
- pcb board

Outline the product you're creating:
- List the hardware components you'll be using, and how they interact. 
  This is an appropriate place for a diagram. An EXCELLENT resource 
  for creating diagrams is the [Fritzing website](http://fritzing.org/home/ "Fritzing website")
- List all of the known parts in the code you'll be creating.
  - Your program must follow good coding standards. 
  Primarily, I mean your code should include meaningful functions 
  and appropriate variables, and be formatted and commented well. 
  Sloppy code with no structure will be penalized 
  
  ## Sources of code and diagrams 
Photocell: base code from by lady Ada from adafruit - https://learn.adafruit.com/photocells/arduino-code
Pir motion sensor: base code by Rui Santos from randomnerdtutorials - https://randomnerdtutorials.com/arduino-with-pir-motion-sensor/
