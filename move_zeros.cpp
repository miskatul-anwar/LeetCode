#include "bits/stdc++.h"
using namespace std;
void moveZeroes(vector<int> &nums) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] == 0) {
        swap(nums[i], nums[j]);
      }
    }
  }
}
int main(void) {
  vector<int> nums = {0, 1, 1, 0, 1, 0};
  moveZeroes(nums);
  for (auto i : nums) {
    cout << i << " ";
  };
  cout << endl;
  return 0;
}
