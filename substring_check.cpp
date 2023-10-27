#include <iostream>
#include <string>

bool areAnagrams(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    int count[256] = {0};

    for (char c : str1) {
        count[c]++;
    }

    for (char c : str2) {
        if (count[c] == 0) {
            return false;
        }
        count[c]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string str1, str2;

    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;

    if (areAnagrams(str1, str2)) {
        std::cout << "The two strings are anagrams." << std::endl;
    } else {
        std::cout << "The two strings are not anagrams." << std::endl;
    }

    return 0;
}
