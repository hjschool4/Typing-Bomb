#include <iostream>
#include <chrono>
#include <ctime>
#include <thread>

int main() {
    
    while (true) {
        auto now = std::chrono::system_clock::now();
        std::time_t current_time = std::chrono::system_clock::to_time_t(now);
        std::tm* local_time = std::localtime(&current_time);
        
        std::cout << local_time->tm_sec << std::endl;
        if (local_time->tm_sec % 15 == 0) {
            std::cout << "BOOM!" << std::endl;
            std::cout << "a"/4 << std::endl;
        }        
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
