#include "bits/stdc++.h"
using namespace std;
bool checkPerfectNumber(int num) {
  vector<int> factors;
  int sum = 0, i = 1;
iterate:
  if (i < num) {
    if (num % i == 0)
      factors.push_back(i);
    i++;
    goto iterate;
  }
  i = 0;
calcsum:
  if (i < factors.size()) {
    sum += factors[i];
    i++;
    goto calcsum;
  }
  return sum == num;
}
