// car class
//attributes: colour, make, engineOn, locked
//methods: set and get make, colour, turn off and on engine, lock and unlock car
//status of the car also needs to displayed

class Car {
  private:
  const std::string DEFAULT_COLOUR = "Black";

  std::string car_colour;
  std::string car_make;
  bool is_engine_on = false;
  bool is_locked = false;

  public:
  Car() {
    std::cout <<"\nCreated";
    set_colour();
    set_make();
    engine_off();
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

  void status(void) {
    std::string engine_status = "Off";
    if(is_engine_on){
      engine_status = "On";
    }
    std::cout <<"\nCar Status: color: " << car_colour << " , make: " << car_make << " ,engine : " << engine_status;
  }
  
};


void carClass(void) {
		Car new_car;
    new_car.status();
}


void areaOf(void) {
		std::cout << " - areaOf: not yet implemented\n\n";
}