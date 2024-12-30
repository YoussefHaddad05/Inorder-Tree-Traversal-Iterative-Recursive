# Binary Search Tree with Custom Stack

This project implements a Binary Search Tree (BST) along with a custom stack class using a dynamic array. The project demonstrates various functionalities of a BST including insertion, recursive inorder traversal, iterative inorder traversal, and visualization of the tree structure.

## Project Structure

The project is divided into the following files:
- `BinarySearchTree.h`: Header file for the Binary Search Tree class.
- `BinarySearchTree.cpp`: Implementation file for the Binary Search Tree class.
- `CustomStack.h`: Header and implementation file for the custom stack class.
- `main.cpp`: Driver file to test the Binary Search Tree class.

## Classes and Methods

### CustomStack Class

The `CustomStack` class is a stack implementation using a dynamic array. The class provides the following methods:

- **CustomStack(int numElements = 10)**: Constructor to initialize the stack with a specified capacity.
- **~CustomStack()**: Destructor to clean up the dynamically allocated memory.
- **bool empty() const**: Checks if the stack is empty.
- **void push(const T& value)**: Pushes an element onto the stack.
- **T top() const**: Returns the top element of the stack.
- **void pop()**: Pops the top element from the stack.

### BinarySearchTree Class

The `BinarySearchTree` class provides the following methods:

- **BinarySearchTree()**: Constructor to initialize the BST.
- **void insert(T value)**: Inserts a value into the BST.
- **void inorderRecursive()**: Performs recursive inorder traversal of the BST.
- **void inorderIterative()**: Performs iterative inorder traversal of the BST using the custom stack.
- **void visualize()**: Displays the structure of the BST in a vertical format.

## Usage

Here is an example of how to use the classes:

```cpp
#include "BinarySearchTree.h"

int main() {
    BinarySearchTree<int> tree;

    
    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);
    tree.insert(12);
    tree.insert(18);

    cout << "Recursive Inorder Traversal: ";
    tree.inorderRecursive();

    cout << "Iterative Inorder Traversal: ";
    tree.inorderIterative();

    cout << "Tree Visualization: " << endl;
    tree.visualize();

    return 0;
}
