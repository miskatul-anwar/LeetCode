#include "bits/stdc++.h"
using namespace std;
int findLucky(vector<int> &arr) {
  vector<int> lucky;
  sort(arr.begin(), arr.end());
  int flag = 0, key = 0, i = 0;
iterate:
  if (i < arr.size()) {
    key = arr[i];
    flag = count(arr.begin(), arr.end(), key);
    if (flag == key) {
      lucky.push_back(key);
    }
    i++;
    goto iterate;
  }
  if (lucky.size()) {
    int j = *max_element(lucky.begin(), lucky.end());
    return j;
  }
  return -1;
}
int main() {
  vector<int> arr = {2, 2, 3, 4};
  cout << findLucky(arr) << endl;
  return 0;
}
