void passwordComplexityChecker(void) {
	std::cout << " - passwordComplexityChecker: not yet implemented\n\n";
}



//helper function to find whether the name exists in the employee list
int getIndex(std::vector<std::string> emp, std::string name){
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
  int indexOfEmp;

  std::vector<std::string> employees = {"John Smith", "Jaelynn Stuart", "Kaley Barajas","Walter Collier", "Cale Myers"};

  std::cout << "There are " << employees.size() << " employess:\n";
  for(int i; i <employees.size(); i++){
    std::cout << employees[i] << "\n";
  }  

  std::cout << "Enter an employee name to remove: ";
  std::getline(std::cin,employeeToRemove);

  indexOfEmp = getIndex(employees, employeeToRemove);

  if(indexOfEmp < 0){
    std::cout << "Record not found! \n";
  }else{
    for(int i = 0; i < employees.size(); i++){
      if(employees[i] == employeeToRemove){
      employees.erase(employees.cbegin()+i);
      }
    }
    std::cout << "There are " << employees.size() << " employess:\n";
    for(int i; i <employees.size(); i++){
    std::cout << employees[i] << "\n";
    }
  }
  

}
