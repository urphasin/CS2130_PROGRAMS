#include <iostream>
#include <unordered_map>

using namespace std;

template <typename T, typename U>
void printUnorderedMap(unordered_map<T, U> um) {
  for (auto i : um) {
    cout << i.first << ": " << i.second << endl;
  }
}


int main() {
  unordered_map<int, string> um = { {1, "O"}, {2, "T"}, {3, "I"}, {4, "T"}, {5, "0"}};

  printUnorderedMap(um);
}