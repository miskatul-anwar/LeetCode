#include "bits/stdc++.h"
using namespace std;
int main(void) {
  vector<int> v = {1, 2, 3, 4, 5, 3, 2, 1, 3, 4};
  int answer = v[0];
  for (int i = 0; i < v.size(); i++) {
    int count = 0;
    for (int j = i; j < v.size(); j++) {
      if (v[i] == v[j]) {
        count++;
      }
    }
    if (count == 1) {
      cout << v[i] << endl;
      return 0;
    }
  }
}
