#include "bits/stdc++.h"
using namespace std;
int addDigits(int num) { return (num - 1) % 9 + 1; }
int main(void) {
  int num;
  cin >> num;
  cout << addDigits(num) << endl;
  return 0;
}
