#include <bits/stdc++.h>
using namespace std;
bool repeatedSubstringPattern(string s) {
  const string ss = s + s;
  return ss.substr(1, ss.length() - 2).find(s) != string::npos;
}
int main(void) {
  string s = "thethelsll";
  cout << repeatedSubstringPattern(s) << endl;
  return 0;
}
