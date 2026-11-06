#include <bits/stdc++.h>

using namespace std;

template <typename T>
void print1DTensor(vector<T> tensor) {
  for (int i = 0; i < tensor.size();i++) {
    cout << "T[" << i << "] = " << tensor[i] << endl;
  }
}

int main() {
  vector<double> T {2.0, 4.0, 6.0, 8.0};
  print1DTensor(T);
}

// g++ tensor.cpp -o ans && ./ans && rm -rf ./ans 