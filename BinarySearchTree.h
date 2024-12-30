#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

#include <iostream>
#include "CustomStack.h" 
using namespace std;

template<typename T>
class BinarySearchTree {
private:
    struct Node {
        T data;
        Node* left;
        Node* right;

        Node(T value) : data(value), left(nullptr), right(nullptr) {}
    };

    Node* root;

    Node* insertRecursively(Node* node, T value);
    void inorderRecursiveHelper(Node* node);
    void inorderIterativeHelper(Node* node);
    void printTree(Node* node, int space, int height = 10);

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(T value);
    void inorderRecursive();
    void inorderIterative();
    void visualize();
};

#endif 
