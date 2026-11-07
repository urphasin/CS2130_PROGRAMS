#include <iostream>

using std::cout;
using std::endl;



template <typename T>
struct BinaryNode {
  BinaryNode<T>* left;
  BinaryNode<T>* right;

  T data;

  // Constructors
  BinaryNode(T value) : data(value), left(nullptr), right(nullptr) {}
};
template <typename T>
class BinaryTree {
private:
  struct BinaryNode<T> *root;

  void PreOrder(BinaryNode<T> *node) {
    if (node == nullptr) return;
    cout << node->data << " ";
    PreOrder(node->left);
    PreOrder(node->right);
  }
  void InOrder(BinaryNode<T> *node) {
    if (node == nullptr) return;
    InOrder(node->left);
    cout << node->data << " ";
    InOrder(node->right);
  }
  void PostOrder(BinaryNode<T> *node) {
    if (node == nullptr) return;
    PostOrder(node->left);
    PostOrder(node->right);
    cout << node->data << " ";
  }
public:
  // Constructors
  BinaryTree(BinaryNode<T> *root) : root(root) {}
  BinaryTree() : root(nullptr) {}

  // Traversal methods
  void PreOrder() {
    PreOrder(root);
    cout << endl;
  }

  void InOrder() {
    InOrder(root);
    cout << endl;
  }

  void PostOrder() {
    PostOrder(root);
    cout << endl;
  }

  // Delete node method
  void destroy(BinaryNode<T> *node) {
    if (node == nullptr) return;
    destroy(node->left);
    destroy(node->right);

    delete node;
  }

  ~BinaryTree() {
    // Destructor goes here
    destroy(root);
    cout << "Destructor ran" << endl;
  }
};

