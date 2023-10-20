#include <iostream>

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BST {
public:
    Node* root;

    BST() {
        root = nullptr;
    }

    void insert(int data) {
        root = insertRecursive(root, data);
    }

    Node* insertRecursive(Node* current, int data) {
        if (current == nullptr) {
            return new Node(data);
        }
        if (data < current->data) {
            current->left = insertRecursive(current->left, data);
        } else if (data > current->data) {
            current->right = insertRecursive(current->right, data);
        }
        return current;
    }

    void displayInOrder() {
        displayInOrderRecursive(root);
    }

    void displayInOrderRecursive(Node* current) {
        if (current != nullptr) {
            displayInOrderRecursive(current->left);
            std::cout << current->data << " ";
            displayInOrderRecursive(current->right);
        }
    }
};

int main() {
    BST tree;
    
    tree.insert(4);
    tree.insert(2);
    tree.insert(6);
    tree.insert(1);
    tree.insert(3);
    tree.insert(5);
    tree.insert(7);
    
    std::cout << "In-order traversal: ";
    tree.displayInOrder();
    std::cout << std::endl;
    
    return 0;
}
