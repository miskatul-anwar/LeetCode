#include <string>
#include <unordered_map>
using namespace std;
bool isAnagram(string s, string t) {
  if (s.length() != t.length())
    return false;

  unordered_map<char, int> count;

  // Count occurrences of characters in string s
  for (char c : s) {
    count[c]++;
  }

  // Decrement occurrences of characters in string t
  // If any character count goes below 0 or if a character in t doesn't exist in
  // s, it means t is not an anagram of s
  for (char c : t) {
    if (--count[c] < 0)
      return false;
  }

  return true;
}

