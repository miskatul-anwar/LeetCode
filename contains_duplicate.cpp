#include <unordered_set>
#include <vector>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    std::unordered_set<int> seen;

    for (int num : nums) {
      // If the element is already in the set, it's a duplicate
      if (seen.find(num) != seen.end()) {
        return true;
      }
      // Otherwise, add it to the set
      seen.insert(num);
    }

    // If we finish the loop without finding duplicates, return false
    return false;
  }
};
