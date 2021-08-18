//helper function to search




//read function to read data from the file phonedirectory.csv
void read(std::string file, std::string& searchTerm){
  std::string line;
  std::ifstream fileObject;
  std::string fullName;
  std::string firstName;
  std::string phoneNumber;
  int lineNumber;
  bool found = false;
  std::string recordFound;

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
	std::cout << " - dataFileParser: not yet implemented\n\n";
}