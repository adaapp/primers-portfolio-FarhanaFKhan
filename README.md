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
Programming paradigm is an approach to solve problems using a programming langugae or tools and techniques available to us (GeeksforGeeks, 2021). The problem should be solved in such a way that it's complexity is broken down and the solution that is implemented is simple and elegant. Martin Fowler (1999), quite eloquently put that thought into words:
>Any fool can write code that a computer can understand. Good programmers write code that humans can understand.

However, Saying that is easy, putting it to practice is another story. 

Simply put, a programming paradigm, for example, procedural, object-oriented, functional, structured, declarative, imperative and event driven can be described as a specific approach used when trying to solve a problem.  Although many programming languages can (and do) support multiple paradigms this discussion will focus more specifically on the possible benefits with examples of the potential differences and similarities of five from the above list. 

This section looks at the following paradigms:


---
## Section 3 - Continued Professional Development
### Benefits of becoming a Polyglot Programmer
The word 'polyglot' is derieved from the Greek which means 'many tongues' and refers to someone who is multilingual (Meduim.com, 2021). Hence, a polyglot programmer is a person who can code in different programming languages. However, it is considered best to stick to one langugage at the begining. Only when you have a good grasp over one language then explore other languages.

In a programming career, junior developers are often advised: A true coder is programming language independent (Magnet,2021).
There are a number of benefits of being a polyglot programmer:
* **Higher Adaptability** : We live in an era of immense technological advancement. New tools and frameworks come out quite frequently. If we get stuck with one language then it would be difficult for us to quickly adapt to new development trends quickly which could lead to technical debt for our business.

* **More Creativity**: Learning different languages exposes us to different ways of solving a problem. When we learn a new langugage, especially after our first, it forces us to crtically think about the similarities and difference between them and to adopt best practices of the both . That in turn helps us write to write clean and efficient code.

* ** Increased Empolyability**: Being a polyglot programmer can significantly increase our employability. It can also help us progress in our careers.

On the other hand, there are a few challenges of becoming a polyglot programmer as well. Such as: 
* **Lack of proficiency**: If you keeping oscillating between one language and the other without first understanding the ins and outs of the first, chances are you are going to run into issues regarding things like proformance and security (Kothari, 2018).

* **Developer fatigue**: In this ever-changing, fast-paced world of tech, it can be exhausting to try and adapt to new languages constantly. It is important to pick and choose your battles rather than becoming a jack of all trades.

Being a polyglot programmer is a great skill to have under your belt, despite its challenges. It not only helps approach business problems in different ways but also helps provide a deeper understanding of what computing is really about.




#### Refrence list
* Fowler, M., Beck, K., Becker, P., Brant, J. and Opdyke, W., 1999. Refactoring: Improving the Design of Existing Code.. 1st ed. Addison-Wesley.
* GeeksforGeeks. 2021. Introduction of Programming Paradigms - GeeksforGeeks. [online] Available at: <https://www.geeksforgeeks.org/introduction-of-programming-paradigms/> [Accessed 23 August 2021].
*Kothari, A., 2018. Do you need to be a polyglot to be a great programmer? | Packt Hub. [online] Packt Hub. Available at: <https://hub.packtpub.com/do-you-need-to-be-polyglot-great-programmer/> [Accessed 23 August 2021].
* Magnet, P., 2021. How to Become a Polyglot Programmer. [online] levelup.gitconnected.com. Available at: <https://levelup.gitconnected.com/how-to-become-a-polyglot-programmer-fff48562e708> [Accessed 23 August 2021].
* Medium.com. 2021. What is a Polyglot Programmer — And Why You Should Become One. [online] Available at: <https://medium.com/@guestposts_92864/what-is-a-polyglot-programmer-and-why-you-should-become-one-e5629bf720c2> [Accessed 23 August 2021].
