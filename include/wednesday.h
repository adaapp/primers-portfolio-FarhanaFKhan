//read function to read data from the file phonedirectory.csv
void read(std::string file, std::string& searchTerm){
  std::string line;
  std::ifstream fileObject;
  std::string name;
  std::string phoneNumber;
  int lineNumber;
  bool found = false;

  fileObject.open(file);
  while(!fileObject.eof()){
    getline(fileObject,line);
    std::stringstream iss(line);
    std::getline(iss, name, ',');

    std::cout <<"\nJust name: " << name;
    
    lineNumber++;
  }
  std::cout << "\nSearching " << lineNumber <<" records..." << std::endl;
  fileObject.close();
}

void phoneDirectory(void) {
  std::string searchWord;
	std::cout << "Please enter a name or number to search:";
  std::getline(std::cin,searchWord);
  std::cout << "Search word: " << searchWord;
  read("phonedirectory.csv", searchWord);

}


void dataFileParser(void) {
	std::cout << " - dataFileParser: not yet implemented\n\n";
}