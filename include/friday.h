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
      std::cout << "\nSorry the engine is already on";
    } else {
      is_engine_on = true;
    }    
  }

  void engine_off(void) {
    if(is_engine_on) {
      is_engine_on = false;
    } else {
      std::cout << "\nSorry the engine is already off";
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
		Car new_car("Blue","Honda");
    new_car.status();
}


void areaOf(void) {
		std::cout << " - areaOf: not yet implemented\n\n";
}