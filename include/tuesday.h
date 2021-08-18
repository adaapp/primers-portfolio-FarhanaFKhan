void passwordComplexityChecker(void) {
	std::cout << " - passwordComplexityChecker: not yet implemented\n\n";
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
