//read function to read data from the file phonedirectory.csv
void read(std::string file){
  std::string line;
  std::ifstream fileObject;
  int lineNumber;

  fileObject.open(file);
  while(!fileObject.eof()){
    getline(fileObject,line);
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
  read("phonedirectory.csv");

}


void dataFileParser(void) {
	std::cout << " - dataFileParser: not yet implemented\n\n";
}