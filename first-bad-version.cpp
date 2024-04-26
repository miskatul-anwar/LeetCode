#include <bits/stdc++.h>
using namespace std;

// Example implementation of isBadVersion function
bool isBadVersion(int version) {
  // Example: bad version is 4
  return version >= 4;
}

class Solution {
public:
  int firstBadVersion(int n) {
    int left = 1, right = n;
    while (left < right) {
      int mid = left + (right - left) / 2;
      if (isBadVersion(mid))
        right = mid;
      else
        left = mid + 1;
    }
    return left;
  }
};

int main(void) {
  int n = 5;
  Solution sol;
  int badVersion = sol.firstBadVersion(n);
  cout << "The first bad version is: " << badVersion << endl;
  return 0;
}

