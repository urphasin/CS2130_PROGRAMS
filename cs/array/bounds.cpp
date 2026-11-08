#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = { 10, 20, 30, 40 };

    for (int i = 0; i < arr.size(); i++) {
        if (i + 1 < arr.size()) {
            cout << arr[i] << " " << arr[i + 1] << endl;
        }
    }
}