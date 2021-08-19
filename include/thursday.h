//blocking function with default value of 10 seconds
void sleepnow(int seconds = 10){
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds * 1000));
}

//primer 7
void sleepTimer(void) {
	sleepnow();
}

//creating a thread
void thread_function(){
  
  std::cout << std::this_thread::get_id() <<" started\n";
  sleepnow();
  std::cout << std::this_thread::get_id() <<" ended\n";
  
}

//primer 8
void joinDetachThreads(void) {
	std::cout <<"Main thread: "<< std::this_thread::get_id() << " started\n";
  
  sleepnow(5);
  std::cout << "Thread 1: ";
  std::thread t1(&thread_function);
  sleepnow(5);
  std::cout << "Thread 2: ";
  std::thread t2(&thread_function);

  t1.join();
  t2.join();

  std::cout <<"Main thread: "<< std::this_thread::get_id() << " ended\n";
}