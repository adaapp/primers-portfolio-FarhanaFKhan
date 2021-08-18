//helper function to search




//read function to read data from the file phonedirectory.csv
void read(std::string file, std::string& searchTerm){
  std::string line;
  std::ifstream fileObject;
  std::string name;
  std::string phoneNumber;
  int lineNumber;
  bool found = false;
  std::string recordFound;

  fileObject.open(file);
  while(!fileObject.eof()){
    getline(fileObject,line);
    lineNumber++;
    std::stringstream iss(line);
    std::getline(iss, name, ',');
    if(name == searchTerm){
      //std::cout <<"\n" << line << std::endl;
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