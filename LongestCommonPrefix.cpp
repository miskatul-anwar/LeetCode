#include "bits/stdc++.h"
using namespace std;
string longestCommonPrefix(vector<string> &strs) {
  if (strs.empty())
    return ""; // If the vector is empty, return an empty string

  string prefix = strs[0]; // Initialize prefix with the first string
  for (int i = 1; i < strs.size(); i++) {
    int j = 0;
    // Compare characters of prefix and current string until they are equal or
    // reach the end of one of them
    while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
      j++;
    }
    prefix = prefix.substr(0, j); // Update prefix with the common prefix so far
    if (prefix.empty())
      break; // If prefix becomes empty, there's no common prefix
  }
  return prefix;
}
