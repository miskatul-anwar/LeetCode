#include <bits/stdc++.h>
using namespace std;
string reverseStr(string s, int k) {
  int n = s.length(), i = 0;
reversestr:
  if (i < n) {
    int left = i, right = min(i + k - 1, n - 1);
  iteratethis:
    if (left < right) {
      swap(s[left++], s[right--]);
      goto iteratethis;
    }
    i += 2 * k;
    goto reversestr;
  }
  return s;
}
/*Given a string s and an integer k, reverse the first k characters for every 2k
characters counting from the start of the string.

If there are fewer than k characters left, reverse all of them. If there are
less than 2k but greater than or equal to k characters, then reverse the first k
characters and leave the other as original.*/
