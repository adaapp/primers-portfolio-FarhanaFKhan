// car class
//attributes: colour, make, engineOn, locked
//methods: set and get make, colour, turn off and on engine, lock and unlock car
//status of the car also needs to displayed

class Car {
  private:
  std::string car_colour;
  const std::string DEFAULT_COLOUR = "Black";
  std::string car_make;
  bool is_engine_on = false;
  bool is_locked = false;

  public:
  Car() {
    std::cout <<"\nCreated";
  }
  ~Car() {
    std::cout <<"\nDestroyed";
  }

  
};


void carClass(void) {
		Car new_car;
}


void areaOf(void) {
		std::cout << " - areaOf: not yet implemented\n\n";
}