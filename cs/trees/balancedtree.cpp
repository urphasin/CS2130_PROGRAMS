#include <bits/stdc++.h>
using namespace std;

#define ll long long

template <typename T>
struct BinaryNode {
  struct BinaryNode* left;
  struct BinaryNode* right;

  T data;

  // Constructors
  BinaryNode(T value) : data(value), left(nullptr), right(nullptr) {};
};


class BinaryTree {
  private:
    struct BinaryNode* root;
  
  public:
    
};

int main() {

  vector<int> a = {7, 2, 9, 4, 3, 8, 5};
  string s = "abcabcabcdabcabcabcd";

}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans