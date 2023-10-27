#include <iostream>
#include <vector>
int main() {
    std::vector<std::string> tasks;
    while (true) {
        std::string task;
        std::cout << "Add a task (or 'q' to quit): ";
        std::cin >> task;
        if (task == "q") break;
        tasks.push_back(task);
    }
    std::cout << "Tasks:\n";
    for (const std::string& task : tasks) {
        std::cout << task << "\n";
    }
    return 0;
}
