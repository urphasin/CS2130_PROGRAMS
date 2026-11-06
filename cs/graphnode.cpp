#include <bits/stdc++.h>

using namespace std;
// using unordered_map

template <typename T>
class Graph {
public:
  Graph() {}

private:
  unordered_map<T, vector<T>> adjL;
};

template <typename T>
void addEdge(unordered_map<T, vector<T>>& um, const T& s, const T& u) {
  um[s].push_back(u);
  um[u].push_back(s);
}


int main() {

  
  
}
