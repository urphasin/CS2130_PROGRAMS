#include <bits/stdc++.h>
using namespace std;

#define ll long long


// inverted pyramid star
void sol1(int n) {
  for(int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    for(int k = 1; k <= (n - i); k++) {
      cout << "* ";
    }

    cout << endl;
  }
}

int main() {
  sol1(5);
}