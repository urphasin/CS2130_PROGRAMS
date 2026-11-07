#include <bits/stdc++.h>
#include <BinaryTree.hpp>

using namespace std;

template <typename T>
struct BinaryNode2 {
  unique_ptr<BinaryNode2<T>> left;
  unique_ptr<BinaryNode2<T>> right;

  T data;

  // Constructor
  BinaryNode2(T val) : data(val), left(nullptr), right(nullptr) {}
};


// Smart BinaryNode Pointers
void sol2() {
  auto root = make_unique<BinaryNode2<int>>(1);

  unique_ptr<BinaryNode2<int>> node2 = make_unique<BinaryNode2<int>>(2);
  auto node3 = make_unique<BinaryNode2<int>>(3);
  auto node4 = make_unique<BinaryNode2<int>>(4);
  auto node5 = make_unique<BinaryNode2<int>>(5);

  // Connect nodes
  root->left  = move(node2);
  root->right = move(node3);
}


// PreOrder Traversal
void PreOrder(struct BinaryNode<int> *root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void InOrder(struct BinaryNode<int> *root) {
  if (root == nullptr) return;
  InOrder(root->left);
  cout << root->data << " ";
  InOrder(root->right);
}

void PostOrder(struct BinaryNode<int> *root, int &x) {
  x++;
  if (root == nullptr) return;
  PostOrder(root->left, x);
  PostOrder(root->right, x);
  cout << root->data << " ";
}

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

// g++ binary_node.cpp -o ans && ./ans && rm -rf ./ans