#include <bits/stdc++.h>

using namespace std;

struct BinaryNode {
  struct BinaryNode *left;
  struct BinaryNode *right;

  int value;

  BinaryNode(int val) : value(val), left(nullptr), right(nullptr) {}
};


int main(){
  // Create nodes a-g
  BinaryNode* a = new BinaryNode(1);
  BinaryNode* b = new BinaryNode(2);
  BinaryNode* c = new BinaryNode(3);
  BinaryNode* d = new BinaryNode(4);
  BinaryNode* e = new BinaryNode(5);
  BinaryNode* f = new BinaryNode(6);
  BinaryNode* g = new BinaryNode(7);

  // Connections
  a->left  = b; a->right = c;
  b->right = e;
  c->left  = d;
  d->right = f;
  e->left  = g;
}