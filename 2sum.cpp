#include "bits/stdc++.h"
using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> ans;
    sort(nums.begin(), nums.end());
    int i = 0, j = nums.size() - 1;
    for (; i < nums.size();) {
      if (nums[i] + nums[j] == target) {
        ans.push_back(i), ans.push_back(j);
      } else if (nums[i] + nums[j] > target) {
        j--;
      } else {
        i++;
      }
    }
    return ans;
  }
};
