#include <bits/stdc++.h>
using namespace std;
int findComplement(long num) {
  for (long i = 1; i <= num; i <<= 1)
    num ^= i;
  return num;
}
int main(void) {
  int num;
  cin >> num;
  cout << findComplement(num) << endl;
  return 0;
}
