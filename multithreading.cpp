#include <iostream>
#include <thread>

void foo() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Thread 1: " << i << std::endl;
    }
}

int main() {
    std::thread t1(foo);
    for (int i = 0; i < 5; ++i) {
        std::cout << "Main Thread: " << i << std::endl;
    }
    t1.join();
    return 0;
}
