#include <bits/stdc++.h>

using namespace std;

template <typename T>
void swap(vector<T>& vec, int i, int j) {
  T temp = vec[j];
  vec[j] = vec[i];
  vec[i] = temp; 
}

template <typename T>
void bubbblesort(vector<T> &res) {
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
      if (j + 1 < arr.size()) {
        cout << "(" << arr[j] << ", " << arr[j + 1] << ")" << endl;
        if (arr[j] > arr[j + 1]) {
          swap(arr, j, j + 1);
        }
      }
    }
  }
}