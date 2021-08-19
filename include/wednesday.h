bool fileExists(std::string filename){
  struct stat buf;
  if(stat(filename.c_str(), &buf) == 0){
    std::cout <<"\nsize: " << buf.st_size;
    std::cout <<"\nmodified: " << ctime(&buf.st_mtime);
    return true;
  }
  return false;
}
//read function to read data from the file phonedirectory.csv and search
void read(std::string file, std::string& searchTerm){
  std::string line;
  std::ifstream fileObject;
  std::string fullName;
  std::string firstName;
  std::string phoneNumber;
  int lineNumber;
  bool found = false;
  std::string recordFound;

  //Error handling
  if(!fileExists(file)){
    std::cout << "\nInvalid file!"<<std::endl;
  }

  fileObject.open(file);

  while(!fileObject.eof()){
    getline(fileObject,line);
    lineNumber++;

    //use stringstream to parse the csv. used stringstream twice to first parse full name and phone number and then to get the first name

    std::stringstream iss(line);
    std:: stringstream ss(line);
    std::getline(iss, fullName, ',');
    std::getline(iss, phoneNumber);
    ss >> firstName;

    //check if the the full name, first name or telephone number exists
    //TODO: check for same first names

    if(fullName == searchTerm || firstName == searchTerm || phoneNumber == searchTerm){
      found = true;
      recordFound = line;
    }    
  }

  std::cout << "\nSearching " << lineNumber <<" records..." << std::endl;
  if(found){
    std::cout << "\nContact details:\n" << recordFound;
  }else{
    std::cout << "Sorry, no contact details found"<< std::endl;
  }
  fileObject.close();
}

void phoneDirectory(void) {
  std::string searchWord;

	std::cout << "Please enter a name or number to search:";
  std::getline(std::cin,searchWord);
  
  read("phonedirectory.csv", searchWord);
}


void dataFileParser(void) {
  std::string line;
  std::ifstream fileObject;
  std::string file = "employeedata.csv";
  std::string fname;
  std::vector<char> initial;
  std::string sname;
  std::vector<std::string> surname;
  int tempSalary;
  std::vector<int> salary;
  int maxNameLength = 0;

  if(!fileExists(file)){
    std::cout << "\nInvalid file!"<<std::endl;
  }


  fileObject.open(file);
  while(!fileObject.eof()){
    getline(fileObject,line);
    std::stringstream iss(line);
    std::getline(iss, fname, ',');
    std::getline(iss, sname, ',');
    iss >> tempSalary;
    initial.push_back(fname[0]);
    surname.push_back(sname);
    salary.push_back(tempSalary);
    //std::cout << "\n" << tempSalary;
  }
  //find the longest last name for setw parameter. so it doesnt need to be hard coded
  for(int i = 0; i < surname.size(); i++){
    int tempLength = 0;
    tempLength = surname[i].length();
    if(tempLength > maxNameLength){
      maxNameLength = tempLength;
    }
  }
  //std::cout << "Max length: " << maxNameLength<< std::endl;

  std::cout << "Initial " << std::setw(12) << "Last" << std::setw(14) << "Salary\n";
  std::cout << "-------"<< std::setw(14)<< "-------"<< std::setw(14)<< "-------\n";
  for(int i = 0; i < initial.size(); i++){
    std::cout << "\n" << initial[i] << "." <<"\t\t\t"<<std::setw(maxNameLength) << surname[i] << std::setw(12)<<"£"<<salary[i];
  }
	
}