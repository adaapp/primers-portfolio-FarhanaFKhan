

void fahrenheitCentigradeConversion(void) {
  std::string temperature;
  char option;
  float t = 0.0;
  float c = 0.0;
  float f = 0.0;

	std::cout << "Please enter the starting temperature: \n";
  
  std::getline(std::cin,temperature);

  std::cout << "You entered: "<< temperature << std::endl;

  std::cout << "Press C to convert from Fahrenheit to Celsius \n";
  std::cout << "Press F to convert from Celsius to Fahrenheit \n";
  
  std::cin >> option;
  t = stof(temperature);

  if (option == 'c' || option == 'C'){
    std::cout << "Your choice: " << option;    
    c = (t - 32) * 5 / 9;
    std::cout<<"\n" << t <<" Fahrenheit is " << c << " degrees";

  }else if (option == 'f' || option == 'F'){
    std::cout << "Your choice: " << option; 
    f = (t * 9 / 5) + 32;
     std::cout<<"\n" << t <<" degrees is " << f << " Fahrenheit";
  }else{
    std::cout << "please enter valid \n";
  }  
}


void selfServiceCheckout(void) {
	std::cout << " - selfServiceCheckout: not yet implemented\n\n";
}

