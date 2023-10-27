#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> phonebook;
    phonebook["Jonny Doe"] = "55145-1234";
    phonebook["Ali Smith"] = "564155-5678";
    phonebook["Hima Johnson"] = "555-1319876";
    std::cout << "Enter a name to search for in the phonebook: ";
    std::string name;
    std::cin.ignore();
    std::getline(std::cin, name);

    if (phonebook.find(name) != phonebook.end()) {
        std::cout << name << " : " << phonebook[name] << std::endl;
    } else {
        std::cout << "Contact not found." << std::endl;
    }

    return 0;
}
