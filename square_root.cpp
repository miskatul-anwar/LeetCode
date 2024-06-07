#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
  if (x == 0 || x == 1)
    return x;

  long long int guess = x;
  while (guess * guess > x) {
    guess = (guess + x / guess) / 2;
  }
  return guess;
}
int main(int argc, char **argv) {
  int x = atoi(argv[1]);
  cout << "The sqrt of " << x << " is " << mySqrt(x) << endl;
  return 0;
}
