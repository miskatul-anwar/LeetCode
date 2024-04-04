class Solution {
public:
  bool isPowerOfTwo(int n) {
    // Check if n is greater than zero and has only one bit set
    return (n > 0) && ((n & (n - 1)) == 0);
  }
};
