void passwordComplexityChecker(void) {
	std::cout << " - passwordComplexityChecker: not yet implemented\n\n";
}


void employeeListRemoval(void) {
	
  //store names of employess in a vector as it is easier to manipulate than an array in C++
  std::string employeeToRemove;

  std::vector<std::string> employees = {"John Smith", "Jaelynn Stuart", "Kaley Barajas","Walter Collier", "Cale Myers"};
  std::cout << "There are " << employees.size() << " employess:\n";
  for(int i; i <employees.size(); i++){
    std::cout << employees[i] << "\n";
  }
  

  std::cout << "Enter an employee name to remove: ";
  std::cin >> employeeToRemove;



}
