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
The biggest issue was related to testing the areas my solution failed, originally, I tested to see if it worked - however, it wasn’t until I tried to break it that I found some of the more serious issues with my design and implementation.  For example, the program crashed when string was entered as input instead of float. Then I used try/catch block of code. What it does is, it prevents the program from crashing and displays the exception on the console.

### Primer 2 - Self-service Checkout
This challenge requires us to allow the user to input number of items and their cost unless they terminate it by inputting 0. The program should then calculate the sub total and apply a fixed shopping tax on it and then add those two values together to display the total amount.
#### Reflection (as well as issues, challenges & resolutions)
The first thing that needed to figure out was how to loop through the prompts to keep asking for inputs unless 0 was entered. That was solved using do while loop. 
I also thought about abstracting the following piece of code into its own pure function:
```
subTotal = subTotal + (quantity * cost);
```
but then I realised that sometimes that approach is not the most efficient way forward.
I enjoyed the calculations required as part of the challenge. 
### Primer 3- Password Complexity Checker
Primer 3 requires us to write a program that allows a user to input a password and to check its complexity. As per the requirements, there can be four levels of complexity- weak, moderate, strong and very strong.
#### Reflection (as well as issues, challenges & resolutions)
The program that I wrote keeps asking for a password until it's complexity is 'weak'.
A helper function 'passwordChecker' was created to abstract the mechanism behind checking the complexity.
The program makes use of switch statements as they are more efficient than if statements.
### Primer 4 - Employee List Removal
This challenge requires us to display a list of employee names and allow a user to input the name of an employee that they want to remove.
#### Reflection (as well as issues, challenges & resolutions)
Figuring out how to store the names of the employees was the most challenging part of this primer. I started off by exploring arrays as a data structure to store the names of the employees. But removing an element from the array without knowing it's size was not possible. Hence, I decided to use vector to store the names. 
The program needs input validation to see whether the input provided by the user is a string or not. 
### Primer 5 - Phone Directory
Primer 5 requires us to allow a user to search a record from an external file by entering either the full name or the contact number. If the number or name is entered it should display the number of records in the file and the details of the record(name and phone number) if it exists in the file. Otherwise display the message that the details weren't found.
#### Reflection (as well as issues, challenges & resolutions)
The primer brief only asked to search the records using either the full name or the telephone number. In my program, however, the user can type in just the first name as well and the record would be displayed if it exists. 
I wanted to expand on that to provide the functionality to able to search a record by entering only the last name as well but time was a constraint. I also wanted to explore how I could tackle records that had the same first name. At this point the program is not capable to deal with that.
The program could be improved by seperating out the search functionality from the read function. 
### Primer 6 - Data file parser
The primer requires us to write a program that reads data from an external file and display it in a particular way set out in the document.
The data in the file stores the first name but the output needs to convert that into initial and add '£' infront of the salary value.

#### Reflection (as well as issues, challenges & resolutions)
Figuring out how to store each value into a variable that could be accessed later was fairly straightforward. Especially after the the previous challenge and primer 4. I just reused the concepts(stringstream and vector) from those two challenges. The most time I spent on this primer was to figure out to use setw. I even wrote a function to get the maximum length of the surname so that value could be dynamically be passed into setw function rather hardcoding it. Even though the displayed format looks quite close to the requirements, I think there is some room for improvement. 
### Primer 7 - Sleep timer
This challenge requires us to write a blocking function that would have a default value of 10 seconds of no parameter is passed. 
This challenge was quite straightforward. 
### Primer 8 - Joining & Detaching Threads
Primer 8 requires us to initialise two threads, each with a unique timer function. The two threads needed to be initialised at different times which were predefined. Thread 1 with a timer of 5 seconds and thread 2 with a timer of 10 seconds. 
We had to make use of blocking function.
#### Reflection (as well as issues, challenges & resolutions)
The challenge I faced was to figure out how to set different times for each thread. Then I recalled from the lectures from the week that we should create pure functions that can be reused. As we had to create a sleep timer in primer 7, I realised I could use the sleepnow function in my timer function without duplicating the code.


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
For this primer I had to look up how to set default values if no parameters were passed. That would especially be useful if the program needs to be extended. Use of constructors also made the program quite flexible. Instead of initialising private variables, using setters proved to be more flexible and easy to handle the code. 
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

There are two broad types of programming paradigms -  imperative and declarative. 
* **Imperative Paradigm**: Imperative programming is a programming paradigm that uses statements that change a program's state. An example of imperative paradigm is listening to Marry Berry to tell you how to bake a cake. She will be giving step by step directions to get that moist sponge. 
Examples of imperative programming languages are Fortan, Pascal, C
* **Declarative Paradigm**: Declarative paradigm expresses the logic of a computation without describing its control flow (Mundy, 2017). In declarative programming languages a program specifies what is to be done rather than how to do it (Encyclopedia Britannica,2021). Building on the previous example, declarative paradigm would not tell each and every step of how to bake a cake. If someone asks you to bake a cake, you can bake it however you like. 

Let's consider a coding related example: 
If you use DOM to chane the colour of a button from red to blue, you would have to specify exactly everything, step by step.That is an example of imperative paradigm. However, if React is use to do the same task then it would declare an element( button in this case) that would be rendered. That is an example of declarative paradigm. 

* **Object oriented Programming Paradigm**: This paradigm falls under the umberella of imperative programming. OOP paradigm is based on the concept of "objects" which can contain data and code. These objects are entities that encapsulate both data and behaviour. Some examples of OOP programming languages are C++, Java, C#. 

* **Procedural Paradigm**: Procedural Programming paradigm can be defined as a programming model which is based on calling procedures. Procedures, also known as routines or functions are a series of computational steps that need to be carried out. Thus, this paradigm also come under imperative programming.


* **Functional Paradigm**: It is a programming paradigm where programs are constructed by applying and composing functions. This paradigm implements mathematical functions. These functions are pure functions, which means they do not cause any observable side effects such as modifying a global object. Functional programming is a type of declarative paradigm.



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
* Encyclopedia Britannica. 2021. Declarative language | computer language. [online] Available at: <https://www.britannica.com/technology/declarative-language> [Accessed 25 August 2021].
* Fowler, M., Beck, K., Becker, P., Brant, J. and Opdyke, W., 1999. Refactoring: Improving the Design of Existing Code.. 1st ed. Addison-Wesley.
* GeeksforGeeks. 2021. Introduction of Programming Paradigms - GeeksforGeeks. [online] Available at: <https://www.geeksforgeeks.org/introduction-of-programming-paradigms/> [Accessed 23 August 2021].
*Kothari, A., 2018. Do you need to be a polyglot to be a great programmer? | Packt Hub. [online] Packt Hub. Available at: <https://hub.packtpub.com/do-you-need-to-be-polyglot-great-programmer/> [Accessed 23 August 2021].
* Magnet, P., 2021. How to Become a Polyglot Programmer. [online] levelup.gitconnected.com. Available at: <https://levelup.gitconnected.com/how-to-become-a-polyglot-programmer-fff48562e708> [Accessed 23 August 2021].
* Medium.com. 2021. What is a Polyglot Programmer — And Why You Should Become One. [online] Available at: <https://medium.com/@guestposts_92864/what-is-a-polyglot-programmer-and-why-you-should-become-one-e5629bf720c2> [Accessed 23 August 2021].
* Mundy, I., 2017. Declarative vs Imperative Programming. [online] codeburst.io. Available at: <https://codeburst.io/declarative-vs-imperative-programming-a8a7c93d9ad2> [Accessed 25 August 2021].
