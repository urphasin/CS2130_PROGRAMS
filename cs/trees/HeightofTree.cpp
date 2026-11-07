#include <bits/stdc++.h>
#include "BinaryTree.hpp"
using namespace std;

#define ll long long

template <typename T>
void heightOfTree(BinaryNode<int>* node) {

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
  tree1.PreOrder();
  tree1.InOrder();
  tree1.PostOrder();
}

// g++ HeightofTree.cpp -o ans && ./ans && rm -rf ./ans