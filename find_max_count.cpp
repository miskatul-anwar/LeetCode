#include "bits/stdc++.h"
#include <vector>
using namespace std;
int findShortestSubArray(vector<int> &nums) {
  vector<int> counters(256, 0);
  for (auto i : nums) {
    counters[i]++;
  }
  int max = counters[0];
  for (int i = 0; i < 256; i++) {
    if (counters[i] > max) {
      max = counters[i];
    }
  }
  return max;
}
