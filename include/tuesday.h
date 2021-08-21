//helper function that checks whether a char in the password string is a digit or a num or a special char.
int passwordChecker(std::string pass) {
  int numOfDigitChar = 0;
  int numOfAlphaChar = 0;
  int numOfSpecialChar = 0;
  int value = 0;

  for(int i = 0; i < pass.length(); i++) {

    if(std::isdigit(pass[i])) {

      numOfDigitChar++;

    } else if (std::isalpha(pass[i])) {

      numOfAlphaChar++;

    } else {

      numOfSpecialChar++;

    }
  }
  std::cout << "\nnumber of digit: " << numOfDigitChar;
  std::cout << "\nnumber of alpha: " << numOfAlphaChar;
  std::cout << "\nnumber of special: " << numOfSpecialChar;
  if ( pass.length() >= 8 && numOfDigitChar >= 2 && numOfAlphaChar >= 4 && numOfSpecialChar >= 1 ){
    value = 4;
  }
  
  if ( pass.length() >= 8 && numOfDigitChar >= 2 && numOfAlphaChar >= 4){
    value = 3;    
  }

  if( pass.length() >= 4 ){
    value = 2;
  }

  if ( numOfAlphaChar > 0 || numOfDigitChar > 0 ) {
    value = 1;
  }


  return value;
}

void passwordComplexityChecker(void) {
  std::string password;
  int passwordStrength = -1;
	std::cout << "PLease enter a password: ";
  std::getline(std::cin, password);
  passwordStrength = passwordChecker(password);
  std::cout <<"\npassword strength: " << passwordStrength;
  switch(passwordStrength) {
    case 2: std::cout << "\nThe password \' " << password <<" \' is Moderate"; break;
    case 3: std::cout << "\nThe password \' " << password <<" \' is Strong"; break;
    case 4: std::cout << "\nThe password \' " << password <<" \' is Very Strong"; break;
    default: std::cout << "\nThe password \' " << password <<" \' is Weak"; break;
  }
  
}



//helper function to find whether the name exists in the employee list
//pass pointer rather than a copy
int findEmployee(std::vector<std::string> emp, std::string name){
  auto it = std::find(emp.cbegin(), emp.cend(), name);
  //if the name is found
  if(it != emp.cend()){
    int index = std::distance(emp.cbegin(),it);
    return index;
  }else{
    //if not found
    return -1;
  }
}

void employeeListRemoval(void) {
	
  //store names of employess in a vector as it is easier to manipulate than an array in C++
  std::string employeeToRemove;
  int isEmployee;

  std::vector<std::string> employees = {"John Smith", "Jaelynn Stuart", "Kaley Barajas","Walter Collier", "Cale Myers"};

  std::cout << "\nThere are " << employees.size() << " employees:\n";
  for(int i; i < employees.size(); i++){
    std::cout << employees[i] << "\n";
  }  

  std::cout << "\nEnter an employee name to remove: ";
  std::getline(std::cin,employeeToRemove);

  isEmployee = findEmployee(employees, employeeToRemove);

  if(isEmployee < 0){
    std::cout << "\nRecord not found! \n";
  }else{
    for(int i = 0; i < employees.size(); i++){
      if(employees[i] == employeeToRemove){
      employees.erase(employees.cbegin()+i);
      }
    }
    std::cout << "\nThere are " << employees.size() << " employess:\n";
    for(int i; i <employees.size(); i++){
    std::cout << employees[i] << "\n";
    }
  }
  

}
