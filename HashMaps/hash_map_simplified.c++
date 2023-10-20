#include <iostream>
#include <vector>

class HashMap {
private:
    static const int TABLE_SIZE = 10;
    std::vector<std::pair<std::string, int>> table[TABLE_SIZE];

    int hash(const std::string& key) {
        int hashValue = 0;
        for (char c : key) {
            hashValue = (hashValue * 31 + c) % TABLE_SIZE;
        }
        return hashValue;
    }

public:
    void insert(const std::string& key, int value) {
        int index = hash(key);
        while (!table[index].empty() && table[index].back().first != key) {
            index = (index + 1) % TABLE_SIZE;
        }
        table[index].push_back(std::make_pair(key, value));
    }

    int get(const std::string& key) {
        int index = hash(key);
        while (!table[index].empty()) {
            if (table[index].back().first == key) {
                return table[index].back().second;
            }
            index = (index + 1) % TABLE_SIZE;
        }
        // Key not found
        return -1;
    }

    void remove(const std::string& key) {
        int index = hash(key);
        while (!table[index].empty()) {
            if (table[index].back().first == key) {
                table[index].pop_back();
                return;
            }
            index = (index + 1) % TABLE_SIZE;
        }
    }
};

int main() {
    HashMap map;

    map.insert("apple", 10);
    map.insert("banana", 5);
    map.insert("cherry", 7);

    std::cout << "Value for key 'apple': " << map.get("apple") << std::endl;
    std::cout << "Value for key 'banana': " << map.get("banana") << std::endl;

    map.remove("apple");
    std::cout << "Value for key 'apple' after removal: " << map.get("apple") << std::endl;

    return 0;
}
