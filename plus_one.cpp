#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    int n = digits.size();
    if (n == 1 && digits[0] == 9) {
      digits = {1, 0};
      return digits;
    }
    digits[n - 1]++;
    for (int i = n - 1; i >= 0; i--) {
      if (digits[i] > 9) {
        digits[i] = 0;
      }
    }
    return digits;
  }
};
