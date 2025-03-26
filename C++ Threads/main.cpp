#include <iostream>
#include <thread>

void doWork() {
    std::cout << "Thread is working!" << std::endl;
}

int main() {
    std::thread worker(doWork);  // Create a thread to execute doWork
    worker.join();  // Ensure the main thread waits for the worker to finish
    return 0;
}
