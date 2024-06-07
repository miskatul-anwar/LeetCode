#include <bits/stdc++.h>
using namespace std;
int reverse(int x) {
  if (x >= 0) {
    string str = to_string(x);
    reverse(str.begin(), str.end());
    x = stoi(str);
  } else {
    x = abs(x);
    string str = to_string(x);
    reverse(str.begin(), str.end());
    list<char> l;
    for (int i = 0; i < str.length(); i++) {
      l.push_back(str[i]);
    }
    l.push_front('-');
    int i = 0;
    auto it = l.begin();
  iterate:
    if (it == l.end()) {
      str[i] = *it;
      i++, it++;
      goto iterate;
    }
    x = stoi(str);
  }
  return x;
}
int main(void) {
  int x;
  cin >> x;
  cout << reverse(x) << endl;
  return 0;
}
