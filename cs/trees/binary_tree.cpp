#include <bits/stdc++.h>

using namespace std;

struct BinaryNode {
  struct BinaryNode *left;
  struct BinaryNode *right;

  int value;

  BinaryNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

// PreOrder Traversal
void PreOrder(struct BinaryNode *root) {
    if (root == nullptr) return;
    cout << root->value << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void InOrder(struct BinaryNode *root) {
  if (root == nullptr) return;
  InOrder(root->left);
  cout << root->value << " ";
  InOrder(root->right);
}
void PostOrder(struct BinaryNode *root, int &x) {
  x++;
  if (root == nullptr) return;
  PostOrder(root->left, x);
  PostOrder(root->right, x);
  cout << root->value << " ";
}

int main(){
  // Create nodes a-g
  BinaryNode* a = new BinaryNode(1);
  BinaryNode* b = new BinaryNode(2);
  BinaryNode* c = new BinaryNode(3);
  BinaryNode* d = new BinaryNode(4);
  BinaryNode* e = new BinaryNode(5);
  BinaryNode* f = new BinaryNode(6);
  BinaryNode* g = new BinaryNode(7);

  // Connect edges
  a->left  = b; a->right = c;
  b->right = e;
  c->left  = d;
  d->right = f;
  e->left  = g;

  // integer reference
  int x = 0;

  // call functions;
  cout << "PreOrder: " <<  "\n"; PreOrder(a);  cout << endl;
  cout << "InOrder: " <<   "\n"; InOrder(a);   cout << endl;
  cout << "PostOrder: " << "\n"; PostOrder(a, x); cout << endl;

  // delete heap memory
  delete a; delete b; delete c; delete d; delete e; delete f; delete g;

  cout << "Total Nodes deleted: " << x << endl;
}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans