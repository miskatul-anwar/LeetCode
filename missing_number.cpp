#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums) {
  int max = *max_element(nums.begin(), nums.end()), i = 0, found = 0;
iterate:
  if (i <= max) {
    if (find(nums.begin(), nums.end(), i) == nums.end()) {
      return i;
    }
    i++;
    goto iterate;
  }
  return max + 1;
}
int main(void) {
  vector<int> nums = {0, 1, 3};
  cout << missingNumber(nums) << endl;
  return 0;
}
