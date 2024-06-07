#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int search(vector<int> &nums, int target) {
    int mid = 0, low = 0, high = nums.size() - 1;
    while (low <= high) {
      mid = (low + high) / 2;
      if (nums[mid] == target) {
        return mid;
      } else if (target < nums[mid]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    }
    // If target not found, return -1
    return -1;
  }
};
