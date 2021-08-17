#include <iomanip> 

float fToC(float f){
  return ((f - 32) * 5 / 9);
}

float cToF(float c){
  return ((c * 9 / 5) + 32);
}

void fahrenheitCentigradeConversion(void) {
  std::string temperature;
  char option;
  float t = 0.0;
  float c = 0.0;
  float f = 0.0;

	std::cout << "Please enter the starting temperature: \n";
  
  std::getline(std::cin,temperature);

  std::cout << "Press C to convert from Fahrenheit to Celsius \n";
  std::cout << "Press F to convert from Celsius to Fahrenheit \n";
  
  std::cin >> option;
  t = stof(temperature);

  if (option == 'c' || option == 'C'){
    std::cout << "Your choice: " << option;
    c = fToC(t);
    std::cout<<"\n" << t <<" Fahrenheit is " << c << " degrees\n";

  }else if (option == 'f' || option == 'F'){
    std::cout << "Your choice: " << option; 
    f = cToF(t);
     std::cout<<"\n" << t <<" degrees is " << f << " Fahrenheit\n";
  }else{
    std::cout << "please enter valid \n";
  }  
}


void selfServiceCheckout(void) {
	//std::cout << " - selfServiceCheckout: not yet implemented\n\n";
  int i = 0;
  int quantity;
  float cost = 0.0;
  float subTotal = 0.0;
  const float tax = 5.5;
  float shoppingTax = 0.0;
  float total = 0.0;

  do{
      i++;
      std::cout<<"Please enter a quantity for item " << i <<" (or 0 to finish): \n";    
      std::cin >> quantity;

      if(quantity > 0){
      std::cout<<"Please enter item " << i <<" cost: \n";
      std::cin >> cost;
      subTotal = subTotal + (quantity * cost);
      }    
  }
  while(quantity > 0);
  
  std::cout<< "Thank you. \n";

  std::cout<< "\nSubtotal: "<< subTotal;

  shoppingTax = (subTotal * tax)/100;
  std::cout << "\nShopping tax: "<< std::setprecision(2) << shoppingTax;

  total = subTotal + shoppingTax;
  std::cout << "\nTotal: "<< std::fixed << total <<std::endl; 


    
}

