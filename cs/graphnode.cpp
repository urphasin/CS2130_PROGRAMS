#include <bits/stdc++.h>

using namespace std;
// using unordered_map

template <typename T>
class Graph {
private:
  unordered_map<T, vector<T>> adjL;

public:
  // Constructors
  Graph() {}

  // Methods
  void addEdge(const T &s, const T &u) {
    adjL[s].push_back(u);
    adjL[u].push_back(s);
  }

  void printGraph() {
    for (const auto &[vertex, neighbors] : adjL) {
      cout << vertex << " : ";

      for (const T &neighbor : neighbors) {
        cout << neighbor << ", ";
      }
      cout << "\n";
    }
  }

};

template <typename T>
void addEdge(unordered_map<T, vector<T>>& um, const T& s, const T& u) {
  um[s].push_back(u);
  um[u].push_back(s);
}


int main() {

  
  
}
