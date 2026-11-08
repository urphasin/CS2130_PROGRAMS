#include <bits/stdc++.h>

using namespace std;

void swap(vector<int>& vec, int i, int j) {
    int temp = vec[j];
    vec[j] = vec[i];
    vec[i] = temp;
}

int main() {
    vector<int> arr = { 10, 20, 30, 40 };

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size(); j++)
        if (j + 1 < arr.size()) {
            cout << "(" << arr[i] << ", " << arr[i + 1] << ")" << endl;
            if(arr[j] > arr[j+1]) {
                swap(arr, j, j+1);
            }
        }
    }
}

// g++ bounds.cpp -o ans && ./ans && rm -rf ./ans
