//helper function that checks whether a char in the password string is a digit or a num or a special char.
int passwordChecker(std::string pass) {
  int numOfDigitChar = 0;
  int numOfAlphaChar = 0;
  int numOfSpecialChar = 0;
  int value = 0;

  for(int i = 0; i < pass.length(); i++) {

    if(std::isdigit(pass[i])) { //if the char is a digit then increase numOfDigitChar by 1
      numOfDigitChar++;
    } else if (std::isalpha(pass[i])) {//if the char is an alphabet then increase numOfAlphaChar by 1
      numOfAlphaChar++;
    } else { //if the char is neither a digit nor an alphabet then increase numOfSpecialChar by 1
      numOfSpecialChar++;
    }
  }
  //this blocks checks the rules specified in the document and sets the 'value' to the relevant number
  if ( pass.length() >= 8 && numOfDigitChar >= 2 && numOfAlphaChar >= 4 && numOfSpecialChar >= 1 ){
    value = 4;
  }else if ( pass.length() >= 8 && numOfDigitChar >= 2 && numOfAlphaChar >= 4){
    value = 3;    
  }else if ( pass.length() >= 4 && numOfAlphaChar > 0 && numOfDigitChar > 0 ){
    value = 2;
  }  else {
    value = 1;
  }

  return value;
}

void passwordComplexityChecker(void) {

  std::string password;
  int passwordStrength = 0;	

  do { //this will keep asking to enter a password till at least a password of moderate strength is entered
    std::cout << "\nRules of password strength:";
    std::cout << "\nOnly numeric or only alphabets: WEAK.";
    std::cout << "\nAt least 4 characters (a combination of numeric and alphabets): MODERATE";
    std::cout << "\nAtleast 8 characters; at least 2 numeric and at least 4 alphabets: STRONG";
    std::cout << "\nAtleast 8 characters; at least 2 numeric and at least 4 alphabets and 1 special character: VERY STRONG"<< std::endl;
    std::cout << "\nPLease enter a password: ";
    std::getline(std::cin, password);

    passwordStrength = passwordChecker(password);

    switch(passwordStrength) {
    case 2: std::cout << "\nThe password \' " << password <<" \' is Moderate\n"; break;
    case 3: std::cout << "\nThe password \' " << password <<" \' is Strong\n"; break;
    case 4: std::cout << "\nThe password \' " << password <<" \' is Very Strong\n"; break;
    default: std::cout << "\nThe password \' " << password <<" \' is Weak\n"; break;
    }

  } while(passwordStrength <= 1);
  
  
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
