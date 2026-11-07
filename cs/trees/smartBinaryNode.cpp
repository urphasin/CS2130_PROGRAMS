#include <bits/stdc++.h>

using namespace std;

template <typename T>
struct BinaryNode {
  unique_ptr<BinaryNode<T>> left;
  unique_ptr<BinaryNode<T>> right;

  T data;

  // Constructor
  BinaryNode(T val) : data(val), left(nullptr), right(nullptr) {}
};


// Smart BinaryNode Pointers
int main() {
  auto root = make_unique<BinaryNode<int>>(1);

  unique_ptr<BinaryNode<int>> node2 = make_unique<BinaryNode<int>>(2);
  auto node3 = make_unique<BinaryNode<int>>(3);
  auto node4 = make_unique<BinaryNode<int>>(4);
  auto node5 = make_unique<BinaryNode<int>>(5);

  // Connect nodes
  root->left  = move(node2);
  root->right = move(node3);
}
