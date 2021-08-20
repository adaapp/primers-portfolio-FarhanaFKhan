// car class
//attributes: colour, make, engineOn, locked
//methods: set and get make, colour, turn off and on engine, lock and unlock car
//status of the car also needs to displayed

class Car {
  private:
  std::string car_colour;
  std::string car_make;
  bool is_engine_on;
  bool is_car_locked;

  public:
  Car() {
    std::cout <<"\nCreated";
    set_colour();
    set_make();
    engine_off();
    locked(false);
  }

  Car(std::string colour, std::string make) {
    std::cout <<"\nCreated with params";
    set_colour(colour);
    set_make(make);
    locked(false);
  }
  ~Car() {
    std::cout <<"\nDestroyed";
  }

  void set_colour(std::string colour = "Black") {
    car_colour = colour;
  }

  std::string get_colour(void) {
    return car_colour;
  }

  void set_make(std::string make = "Audi") {
    car_make = make;
  }

  std::string get_make(void) {
    return car_make;
  }

  void engine_on(void) {
    if(is_engine_on) {
      std::cout << "\nSorry the engine is already on\n";
    } else {
      is_engine_on = true;
      std::cout << "\nTurning the engine on\n";
    }    
  }

  void engine_off(void) {
    if(is_engine_on) {
      is_engine_on = false;
    } else {
      std::cout << "\nSorry the engine is already off\n";
    }
  }

  void locked(bool is_locked) {
    if(is_locked) {
      is_car_locked = true;
    } else {
      is_car_locked = false;
    }

  }

  void status(void) {
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
    std::cout << "\n1. Turn Engine On \n2. Turn Engine Off \n3. Lock Car \n4. Unlock Car \nPlease selet an option(or 0 to finish): ";
    std::cin >> option_string; 

    option = stoi(option_string);

    switch(option) {
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


void areaOf(void) {
		std::cout << " - areaOf: not yet implemented\n\n";
}