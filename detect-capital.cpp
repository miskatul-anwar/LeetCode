#include "bits/stdc++.h"
#include <cctype>
using namespace std;
class Solution {
public:
  bool detectCapitalUse(string word) {
    for (int i = 1; i < word.length(); ++i)
      if (isupper(word[1]) != isupper(word[i]) ||
          islower(word[0]) && isupper(word[i]))
        return false;
    return true;
  }
};

int main(void) {
  string word;
  cin >> word;
  Solution s;
  s.detectCapitalUse(word) ? cout << "True" << endl : cout << "False" << endl;
  return 0;
}
