#include "bits/stdc++.h"
#include <cstdlib>
using namespace std;
int main(void) {
  string str, tmp;
  str = "Never Odd Or Even";
  for (char &i : str) {
    i = tolower(i);
  }
  tmp = str;
  int i = 0, j = 0;
  while (i < j) {
    swap(str[i], str[j]);
    i++, j--;
  }
  bool n = (tmp == str);
  cout << n << endl;
  EXIT_SUCCESS;
}
