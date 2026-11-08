#include <bits/stdc++.h>

using namespace std;

void swap(vector<int>& vec, int i, int j) {
    int temp = vec[j];
    vec[j] = vec[i];
    vec[i] = temp;
}

void print_1d_vec(const vector<int>& res) {
    cout << "( ";
    for (auto i : res) {
        cout << i << ", ";
    }
    cout << ")" << endl;
}

void check_left_neighbor() {
    vector<int> arr = { 40, 30, 20, 10 };

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

    print_1d_vec(arr);
}

int main() {
    check_left_neighbor();
}

// g++ bounds.cpp -o ans && ./ans && rm -rf ./ans
