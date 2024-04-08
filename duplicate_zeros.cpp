#include "bits/stdc++.h"
using namespace std;
void duplicateZeros(vector<int> &arr) {
  int n = arr.size();
  int zerosToDuplicate = 0;

  // Count the number of zeros in the array
  for (int num : arr) {
    if (num == 0) {
      zerosToDuplicate++;
    }
  }

  // Iterate from the end of the array
  for (int i = n - 1; i >= 0; i--) {
    if (i + zerosToDuplicate < n) {
      // Shift the element to the right to make space for the duplicate zero
      arr[i + zerosToDuplicate] = arr[i];
    }

    if (arr[i] == 0) {
      zerosToDuplicate--;
      if (i + zerosToDuplicate < n) {
        // Insert the duplicate zero
        arr[i + zerosToDuplicate] = 0;
      }
    }
  }
}
