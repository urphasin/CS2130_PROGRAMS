#include <bits/stdc++.h>

using namespace std;

template <typename T>
void print1DTensor(vector<T> tensor) {
  for (int i = 0; i < tensor.size();i++) {
    cout << "T[" << i << "] = " << tensor[i] << endl;
  }
}

template <typename T>
class Tensor1D {
  private:
    vector<T> data;
  public:
  Tensor1D<T>(vector<T> values) : data(values) {}
  
};

int main() {
  vector<double> T {2.0, 4.0, 6.0, 8.0};
  print1DTensor(T);
}

// g++ tensor.cpp -o ans && ./ans && rm -rf ./ans 