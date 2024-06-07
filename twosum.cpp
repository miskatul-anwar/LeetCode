#include "bits/stdc++.h"
using namespace std;
vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> m;
  int i = 0;
iterate:
  if (i < nums.size()) {
    int complement = target - nums[i];
    if (m.find(complement) != m.end()) {
      return {m[complement], i};
    }
    m[nums[i]] = i;
    i++;
    goto iterate;
  }
  return {};
}
