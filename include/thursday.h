//blocking function with default value of 10 seconds
void sleepnow(int seconds = 10){
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds * 1000));
}

//primer 7
void sleepTimer(void) {
	sleepnow();
}

//creating a thread
void thread1(){
  
  std::cout << "Thread 1: "<< std::this_thread::get_id() <<" started\n";
  sleepnow(5);
  std::cout << "Thread 1: "<< std::this_thread::get_id() <<" ended\n";
  
}

void thread2(){
  
  std::cout << "Thread 2: "<< std::this_thread::get_id() <<" started\n";
  sleepnow();
  std::cout << "Thread 2: "<< std::this_thread::get_id() <<" ended\n";
  
}

//primer 8
//thread1 is initialised after 5 seconds by calling the sleep now function,
//then thread2 is initialised. join() pauses the main thread and waits till thread1 and thread 2 complete execution.
void joinDetachThreads(void) {
  
	std::cout <<"Main thread: "<< std::this_thread::get_id() << " started\n";

  sleepnow(5);

  std::thread t1(&thread1);
  std::thread t2(&thread2);  

  t1.join();
  t2.join();

  std::cout <<"Main thread: "<< std::this_thread::get_id() << " ended\n";
}