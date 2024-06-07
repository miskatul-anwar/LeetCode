#include "bits/stdc++.h"
using namespace std;
int strStr(string haystack, string needle) {
  int length = needle.length();
  size_t pos = 0;
  if ((pos = haystack.find(needle)) != string::npos) {
    return pos;
  }
  return -1;
}
int main(void) {
  cout << strStr("hello", "ll") << endl;
  return 0;
}
