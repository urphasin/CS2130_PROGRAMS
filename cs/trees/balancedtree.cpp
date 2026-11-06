#include <bits/stdc++.h>
#include "BinaryTree.hpp"
using namespace std;

#define ll long long


void sol1() {
  // Raw BinaryNode Pointer
  BinaryNode<int> *root = new BinaryNode<int>(1);

  BinaryNode<int> *node2 = new BinaryNode<int>(2);
  BinaryNode<int> *node3 = new BinaryNode<int>(3);
  BinaryNode<int> *node4 = new BinaryNode<int>(4);
  BinaryNode<int> *node5 = new BinaryNode<int>(5);

  // Connect nodes
  root->left = node2;
  root->right = node3;

  node2->left = node4;
  node2->right = node5;
}
int main() {

}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans