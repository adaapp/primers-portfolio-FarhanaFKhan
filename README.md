# Primer Portfolio

## Section 1 - Primer Challenges
### Primer 1 - Fahrenheit / Centigrade Conversion
This challenge requires us to allow a user to enter a value before selecting whether to convert it from Fahrenheit to Centigrade or Centigrade to Fahrenheit.  As part of the initial design the conversion algorithms were needed for both calculations. 

To help complete this challenge I needed to break the overall problem down into the following main tasks: 
* Get data from the user
* Verify the data is in a suitable format
* Create a method to convert F->C
* Create a method to convert C->F
 
#### Reflection (as well as issues, challenges & resolutions)
The biggest issue was related to testing the areas my solution failed, originally, I tested to see if it worked - however, it wasn’t until I tried to break it that I found some of the more serious issues with my design and implementation.  For example, ...

### Primer 2 - Self-service Checkout
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque ac elit in magna porttitor convallis. Ut eu justo rutrum, luctus lorem a, pretium quam. Sed ut commodo lectus. Vestibulum ut ligula lorem. Nulla mattis varius ex ac luctus. Aenean nec laoreet enim. Sed lorem erat, vestibulum ut faucibus vel, pellentesque nec felis. Vivamus metus tellus, pretium eu sodales interdum, fringilla ut mauris. ....
### Primer 9 - Car Class
This chanllenge requires us to allow a user to select an option from the provided menu to do one of the following:
* Turn Engine On
* Turn Engine Off 
* Lock Car
* Unlock Car
If the Engine is already off and the user selects the option to turn it off then a message should be displayed which tells that the engine is already off. 

I created a car class with the required attributes and methods which are as follows (taken from the provided document):
* void set_colour(string) – used to set the car’s colour, e.g., Blue, White, etc.
* string get_colour(void) – returns the car’s colour
* void set_make(string) – used to set the car’s make, e.g., Toyota, Honda, Ford, Kia, etc,
* string get_make(void) – returns the car’s make
* void engine_on(void) – used to turn the car’s engine on
* void engine_off(void) – used to turn the car’s engine off
* void locked(bool) – locks / unlocks the car.
* void status(void) – displays the car’s current status (see example output below)

#### Reflection (as well as issues, challenges & resolutions)
For this primer I had to look up how to set default values if no parameters were passed. That would especially be useful if the programme needs to be extended. Use of constructors also made the programme quite flexible. Instead of initialising private variables, using setters proved to be more flexible and easy to handle the code. 
It was important to understand exactly what the requirements were and to spend some time thinking how to tackle the primer. Creating pure functions, for example, for turning on the engine or turning off the engine also helped write clean code.  
### Primer 10 - Area of
This challenge requires us to calculate area of 3 out of the 5 specific shape types from the list: rectangles, circles, squares, triangles or trapezoids. 

As part of the challenge we had to apply the one of the four rules of object oriented programming - polymorphism. 

To complete this challenge I created a class AreaOf and overloaded the size method. I chose to calculate area of square, rectangle and trapezoid. 

#### Reflection (as well as issues, challenges & resolutions)
The biggest challenge for me while solving this primer was to understand the specifications/brief. I went down the route of creating a super class of AreaOf and created derived classes of individual shapes (square, rectangle, etc). Only after revisting the brief and reading it a couple more times did I understand the requirement. I think, this could partially be because I decided to work on this primer on a Sunday afternoon. Once I fully understood what I was asked in the brief, it didn't take long to write the code. This builds on what we had disscussed all through the week that we need to spend time thinking on the problem and understand it first and then try to hack around a solution.
Another issue that I faced was calculating area of shapes with same size. For example, square and circle require only one parameter to calculate its area and similarly, rectangle and triangle require two parameters. Circle and square would have the same method signature:
~~~
float size(float x);
~~~

---
## Section 2 - Programming Paradigms
### Programming Paradigms
Simply put, a programming paradigm, for example, procedural, object-oriented, functional, structured, declarative, imperative and event driven can be described as a specific approach used when trying to solve a problem.  Although many programming languages can (and do) support multiple paradigms this discussion will focus more specifically on the possible benefits with examples of the potential differences and similarities of five from the above list. These are ...

---
## Section 3 - Continued Professional Development
### Benefits of becoming a Polyglot Programmer
Vestibulum vitae semper sem. Duis leo leo, suscipit at felis non, pellentesque varius massa. Sed sit amet orci nibh. Morbi scelerisque faucibus elit, vitae mollis turpis finibus eget. In convallis euismod nunc non imperdiet. Duis ultricies pulvinar lorem, sed molestie nunc porta at. Aenean arcu ante, efficitur nec felis sed, feugiat iaculis turpis. Vestibulum eu elementum diam. Quisque nec tortor auctor, scelerisque ante vitae, fringilla tellus.

Quisque ligula lectus, efficitur quis malesuada sit amet, malesuada sed nibh. In lorem erat, elementum quis tempus nec, rhoncus ac ante. Mauris suscipit massa tempor, pulvinar neque vel, gravida nulla. Donec massa diam, molestie in diam nec, vulputate faucibus ligula. Aliquam erat volutpat. Aliquam sit amet dui ligula. Nullam euismod eros ultrices magna convallis lobortis. Proin convallis placerat tincidunt. Quisque interdum, nisi id egestas luctus, augue libero lacinia urna, sit amet tempus nisl sem nec quam. Vestibulum interdum urna mauris, vel dignissim nisi dignissim egestas. Donec volutpat dictum dui, at egestas sem tristique nec.
