//blocking function with default value of 10 seconds
void sleepnow(int seconds = 10){
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds * 1000));
}

//primer 7
void sleepTimer(void) {
	sleepnow();
}

//primer 8
void joinDetachThreads(void) {
	std::cout << " - joinDetachThreads: not yet implemented\n\n";
}