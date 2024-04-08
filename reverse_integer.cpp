#include "bits/stdc++.h"
using namespace std;
int reverse(int x) {
  int check = 0;
  x < 0 ? check = 1 : check = 0;
  x = abs(x);
  int num = 0;
  while (x > 0) {
    num = num * 10 + x % 10;
    x /= 10;
  }
  return check ? -num : num;
}
int main(void) {
  int num;
  cin >> num;
  cout << reverse(num) << endl;
  return 0;
}
