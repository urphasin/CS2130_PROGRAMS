#include <bits/stdc++.h>
#include "BinaryTree.hpp"

using namespace std;

int main(){
  // Create nodes 1-7
  BinaryNode<int>* a = new BinaryNode<int>(1);
  BinaryNode<int>* b = new BinaryNode<int>(2);
  BinaryNode<int>* c = new BinaryNode<int>(3);
  BinaryNode<int>* d = new BinaryNode<int>(4);
  BinaryNode<int>* e = new BinaryNode<int>(5);
  BinaryNode<int>* f = new BinaryNode<int>(6);
  BinaryNode<int>* g = new BinaryNode<int>(7);

  // Connect edges
  a->left  = b; a->right = c;
  b->right = e;
  c->left  = d;
  d->right = f;
  e->left  = g;

  BinaryTree<int> treeA(a);
  treeA.InOrder();
  treeA.PreOrder();
  treeA.PostOrder();
  
  // integer reference
  int x = 0;
}

// g++ binary_node.cpp -o ans && ./ans && rm -rf ./ans