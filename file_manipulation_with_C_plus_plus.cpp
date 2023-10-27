#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

int main() {
    std::ifstream infile("data.csv");
    std::vector<std::vector<std::string>> data;

    std::string line;
    while (std::getline(infile, line)) {
        std::vector<std::string> row;
        std::stringstream ss(line);
        std::string cell;

        while (std::getline(ss, cell, ',')) {
            row.push_back(cell);
        }

        data.push_back(row);
    }

    // Manipulate and process data here
    for (const auto& row : data) {
        for (const std::string& cell : row) {
            std::cout << cell << '\t';
        }
        std::cout << '\n';
    }

    return 0;
}
