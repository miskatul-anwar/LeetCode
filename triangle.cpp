#include <bits/stdc++.h>
using namespace std;
int minimum_element(vector<int> &minimus) {
  return *min_element(minimus.begin(), minimus.end());
}
int minimumTotal(vector<vector<int>> &triangle) {
  vector<int> rowvector;
  vector<int> minimum;
  int sum = 0;
  for (auto i : triangle) {
    for (auto j : i) {
      rowvector.push_back(j);
    }
    minimum.push_back(minimum_element(rowvector));
  }
  for (auto i : minimum) {
    sum += i;
  }
  return sum;
}
int main() {
  vector<vector<int>> triangle = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
  cout << minimumTotal(triangle) << endl;
  return 0;
}
