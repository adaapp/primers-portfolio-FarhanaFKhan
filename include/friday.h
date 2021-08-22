// car class-primer 9
//attributes: colour, make, engineOn, locked
//methods: set and get make, colour, turn off and on engine, lock and unlock car
//status of the car also needs to displayed
class Car {
  private:
  std::string car_colour;
  std::string car_make;
  bool is_engine_on;
  bool is_car_locked = false;

  public:
  Car() {//constructor without any paramaters
    std::cout <<"\nCreated";
    set_colour();
    set_make();
    engine_off();
  }

  Car(std::string colour, std::string make) { //constructor based on two paramaters
    set_colour(colour);
    set_make(make);
  }
  ~Car() {
    std::cout <<"\nDestroyed";
  }

  void set_colour(std::string colour = "Black") {// method to set colour
    car_colour = colour;
  }

  std::string get_colour(void) {//method to get colour
    return car_colour;
  }

  void set_make(std::string make = "Audi") {//method to set make
    car_make = make;
  }

  std::string get_make(void) {//method to get make
    return car_make;
  }

  void engine_on(void) {//method to turn engine on, if its already on then show relevent message
    if(is_engine_on) {
      std::cout << "\nSorry the engine is already on\n";
    } else {
      is_engine_on = true;
      std::cout << "\nTurning the engine on\n";
    }    
  }

  void engine_off(void) {//method to switch engine off, if its already off then show relevent message
    if(is_engine_on) {
      is_engine_on = false;
    } else {
      std::cout << "\nSorry the engine is already off\n";
    }
  }

  void locked(bool is_locked) {//method to locj or unlock car
    if(is_locked && !is_car_locked) { //want to lock the unlocked car
      is_car_locked = true;
      std::cout << "\nThe car is locked\n";
    } else if(is_locked && is_car_locked) { //trying to lock already locked car
      std::cout << "\nSorry,the car is alreay locked\n";
    } else if(!is_locked && is_car_locked) { // want to unlock the locked car
      is_car_locked = false;
      std::cout << "\nThe car is unlocked\n";
    } else {
      std::cout << "\nSorry, the car is already unlocked\n";
    }

  }

  void status(void) {//method to display status
    std::string engine_status = "Off";
    std::string lock_status = "Unlocked";

    if(is_engine_on){
      engine_status = "On";
    }

    if(is_car_locked) {
      lock_status = "locked";
    }
    std::cout <<"\nCar Status: color: " << car_colour << " , make: " << car_make << " , engine : " << engine_status << " , " << lock_status;
  }
  
};

//primer 9
void carClass(void) {
  std::string option_string;
  int option = -1; //declare and initialise an integer type variable

  Car new_car("Blue","Honda"); //instantiate an object of class Car

  do {
    new_car.status(); //display status of the car
    //interactive menu
    std::cout << "\n1. Turn Engine On";
    std::cout << "\n2. Turn Engine Off";
    std::cout << "\n3. Lock Car";
    std::cout << "\n4. Unlock Car";
    std::cout << "\nPlease selet an option(or 0 to finish): ";
    std::cin >> option_string; 

    option = stoi(option_string);

    switch(option) {//code block to output relevant message depending on the value of the option
      case 1: new_car.engine_on(); break;
      case 2: new_car.engine_off(); break;
      case 3: new_car.locked(true); break;
      case 4: new_car.locked(false); break;
      default:
			std::cout << "\n'" << option << "' is an invalid option  - please try again.";
			break;
    }

  } while (option != 0);
    
}

//class AreaOf-primer 10
class AreaOf {
  public:
  AreaOf(){
    std::cout << "\nCreated.";
  }
  ~AreaOf(){
    std::cout << "\nDestroyed";
  }

  float size(float a) {//method to calculate area of square
    return a * a;
  }  

  float size(float w, float l) {//method to calculate area of rectangle
    return w * l;
  }

  float size(float b,float h,float a) {
    float result = 0.5 * (a + b) * h;
    return result;
  }


};


void areaOf(void) {
  AreaOf quadrilateral;
  
	std::cout << "\nArea of Square (a = 6.1) : " << quadrilateral.size(6.1);  
  std::cout << "\nArea of Rectangle (w = 4, l = 5.9) : " << quadrilateral.size(4,5.9);
  std::cout << "\nArea of Trapezoid (b = 14, h = 7.5, a = 6) : " << quadrilateral.size(14,7.5,6);
}