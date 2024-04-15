#include <bits/stdc++.h>
using namespace std;
bool isHappy(int n) {
  // Set to keep track of seen numbers to detect cycles
  std::unordered_set<int> seen;

  while (n != 1) {
    // If n is already seen, it's not a happy number
    if (seen.find(n) != seen.end()) {
      return false;
    }

    // Add n to the set of seen numbers
    seen.insert(n);

    // Compute the sum of the squares of digits of n
    int sum = 0;
    while (n > 0) {
      int digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }

    // Update n with the computed sum
    n = sum;
  }

  // If the loop ends with n equal to 1, it's a happy number
  return true;
}
int main(void) {
  int n;
  cin >> n;
  cout << isHappy(n) << endl;
  return 0;
}
