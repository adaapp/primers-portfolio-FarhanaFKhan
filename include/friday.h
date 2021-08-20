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
  }
  ~Car() {
    std::cout <<"\nDestroyed";
  }

  void set_colour(std::string colour = "Black"){
    car_colour = colour;
  }

  std::string get_colour(){
    return car_colour;
  }

  void set_make(std::string make = "Audi"){
    car_make = make;
  }

  std::string get_make(){
    return car_make;
  }

  void status(void) {
    std::cout <<"\nCar Status: color: " << car_colour << " , make: " << car_make;
  }
  
};


void carClass(void) {
		Car new_car;
    new_car.status();
}


void areaOf(void) {
		std::cout << " - areaOf: not yet implemented\n\n";
}