template <typename T>
struct BinaryNode {
  struct BinaryNode<T>* left;
  struct BinaryNode<T>* right;

  T data;

  // Constructors
  BinaryNode(T value) : data(value), left(nullptr), right(nullptr) {}
};

template <typename T>
class BinaryTree {
  private:
    struct BinaryNode<T>* root;
  
  public:
  // Constructors
  BinaryTree(BinaryNode<T>* root) : root(root) {}
  BinaryTree() : root(nullptr) {}
  
  ~BinaryTree() {
    // Destructor goes here
  }
};
