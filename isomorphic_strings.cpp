#include "bits/stdc++.h"
#include <unordered_set>
using namespace std;
bool isIsomorphic(string s, string t) {
  unordered_set<string> seen;
  for (auto i : s)
    seen.insert(string(1, i));
  for (auto i : t)
    if (seen.find(string(1, i)) != seen.end())
      return true;
  return false;
}
