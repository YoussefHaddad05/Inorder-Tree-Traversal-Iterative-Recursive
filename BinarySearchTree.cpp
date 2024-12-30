#include "BinarySearchTree.h"



template<typename T>
void BinarySearchTree<T>::insert(T value) {
    root = insertRecursively(root, value);
}

template<typename T>
typename BinarySearchTree<T>::Node* BinarySearchTree<T>::insertRecursively(Node* node, T value) {
    if (node == nullptr) {
        return new Node(value);
    }

    if (value < node->data) {
        node->left = insertRecursively(node->left, value);
    }
    else if (value > node->data) {
        node->right = insertRecursively(node->right, value);
    }

    return node;
}





template<typename T>
void BinarySearchTree<T>::inorderRecursive() {
    inorderRecursiveHelper(root);
    cout << "\n";
}


template<typename T>
void BinarySearchTree<T>::inorderRecursiveHelper(Node* node) {
    if (node == nullptr) {
        return;
    }

    inorderRecursiveHelper(node->left);  
    cout << node->data << " ";      
    inorderRecursiveHelper(node->right);
}




template<typename T>
void BinarySearchTree<T>::inorderIterative() {
    inorderIterativeHelper(root);
    cout << "\n";
}

template<typename T>
void BinarySearchTree<T>::inorderIterativeHelper(Node* node) {
    CustomStack<Node*> s;
    Node* current = node;

    while (!s.empty() || current != nullptr) {
        if (current != nullptr) {
            s.push(current);
            current = current->left;
        }
        else {

        current = s.top();
        s.pop();
        cout << current->data << " "; 

        current = current->right;
        }
    }
}





template<typename T>
void BinarySearchTree<T>::visualize() {
    printTree(root, 0);
}


template<typename T>
void BinarySearchTree<T>::printTree(Node* root, int space, int height) {
    if (root == nullptr)
        return;

    space += height;

    printTree(root->right, space);

    cout << endl;
    for (int i = height; i < space; i++)
        cout << " ";
    cout << root->data << "\n";

    printTree(root->left, space);
}


template class BinarySearchTree<int>;
