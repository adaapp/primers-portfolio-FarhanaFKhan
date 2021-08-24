//blocking function with default value of 10 seconds
void sleepnow(int seconds = 10){
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds * 1000));
}

//primer 7
void sleepTimer(void) {
	sleepnow();
}




//primer 8
//thread1 is initialised after 5 seconds by calling the sleep now function,
//then thread2 is initialised. join() pauses the main thread and waits till thread1 and thread 2 complete execution.

const int t1 = 5;
const int t2 = 10;

void timer1() {
  std::cout << "\nThread 1: "<< std::this_thread::get_id() <<" started\n";
  sleepnow(t1);
  std::cout << "\nThread 1: "<< std::this_thread::get_id() <<" ended\n";
}

void timer2() {
  std::cout << "\nThread 2: "<< std::this_thread::get_id() <<" started\n";
  sleepnow(t2);
  std::cout << "\nThread 2: "<< std::this_thread::get_id() <<" ended\n";
}
void joinDetachThreads(void) {
  
	std::cout <<"\nMain thread: "<< std::this_thread::get_id() << " started\n";

  std::thread thread1(&timer1);
  std::thread thread2(&timer2);  

  thread1.join();
  thread2.join();

  std::cout <<"Main thread: "<< std::this_thread::get_id() << " ended\n";
}