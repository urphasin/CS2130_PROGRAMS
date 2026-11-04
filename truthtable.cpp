#include <bits/stdc++.h>
using namespace std;

/*
a = x
b = y
c = z
d = w
*/

int output(int a , int b, int c, int d) {
  int ans = (c && !d) || (!b && !d) || (a && !b && !c);
  return ans;
}

int main() {
  for (int a = 0; a < 2; a++) {
    for (int b = 0; b < 2; b++) {
      for (int c = 0; c < 2; c++) {
        for (int d = 0; d < 2; d++) {
          cout << a << " " << b << " " << c << " " << d << setw(7)
           << output(a, b, c, d) << endl;
        }
      }
    }
  }
}