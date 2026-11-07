#include "BinaryTree.hpp"

template <typename T>
void printLCA(BinaryNode<T>* root, BinaryNode<T>* p, BinaryNode<T>* q) {
  cout << BinaryTree<T>::LCA(root, p, q)->data << endl;
}

int main() {
    // Raw BinaryNode Pointer
  BinaryNode<int> *root = new BinaryNode<int>(1);

  BinaryNode<int> *node2 = new BinaryNode<int>(2);
  BinaryNode<int> *node3 = new BinaryNode<int>(3);
  BinaryNode<int> *node4 = new BinaryNode<int>(4);
  BinaryNode<int> *node5 = new BinaryNode<int>(5);
  BinaryNode<int> *node6 = new BinaryNode<int>(6);
  BinaryNode<int> *node7 = new BinaryNode<int>(7);
  BinaryNode<int> *node8 = new BinaryNode<int>(8);

  // Connect nodes
  root->left = node2;
  root->right = node3;

  node2->left = node4;

  node3->right = node7;

  node4->right = node5;
  
  node5->left = node6;

  node7->left = node8; 

  
  BinaryTree<int> tree1(root);
  cout << "LCA from node 8, to node 2 is = "; printLCA(root, node8, node5); cout << endl;

}

// g++ LCA.cpp -o ans && ./ans && rm -rf ./ans

