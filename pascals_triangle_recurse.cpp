#include <bits/stdc++.h>
using namespace std;
int factorial(int n) {
  if (n == 0 || n == 1)
    return 1;
  return n * factorial(n - 1);
}
int combination(int n, int r) {
  return factorial(n) / (factorial(r) * factorial(n - r));
}
vector<vector<int>> generate(int numRows) {
  vector<vector<int>> ans;
  for (int i = 0; i < numRows; ++i) {
    vector<int> v;
    for (int j = 0; j <= i; j++) {
      v.push_back(combination(i, j));
    }
    ans.push_back(v);
  }
  return ans;
}
