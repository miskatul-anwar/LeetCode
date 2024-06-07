#include "bits/stdc++.h"
using namespace std;
vector<int> intersect(vector<int> &nums1, vector<int> &nums2) {
  vector<int> common_vector;
  sort(nums1.begin(), nums1.end()), sort(nums2.begin(), nums2.end());
  set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(),
                   back_inserter(common_vector));
  return common_vector;
}
