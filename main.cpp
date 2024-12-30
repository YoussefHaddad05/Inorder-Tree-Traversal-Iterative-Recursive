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

    cout << "Tree Visualization: " << endl;
    tree.visualize();

    cout << "\n\nRecursive Inorder Traversal: ";
    tree.inorderRecursive();

    cout << "\nIterative Inorder Traversal: ";
    tree.inorderIterative();

    cout << "\n\n";

    return 0;
}
