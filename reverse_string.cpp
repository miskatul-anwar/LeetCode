#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
  void reverseString(std::vector<char> &s) {
    int left = 0;             // Pointer starting from the beginning
    int right = s.size() - 1; // Pointer starting from the end

    while (left < right) {
      // Swap characters at positions left and right
      swap(s[left], s[right]);

      // Move the pointers towards each other
      left++;
      right--;
    }
  }
};
