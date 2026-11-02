#include <bits/stdc++.h>

using namespace std;

struct BinaryNode {
  struct BinaryNode *left;
  struct BinaryNode *right;

  int value;

  BinaryNode(int val) : value(val), left(nullptr), right(nullptr) {}
};