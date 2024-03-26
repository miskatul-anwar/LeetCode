#include <bits/stdc++.h>
using namespace std;

int lenghtOfLastWord(string s) {
  string point;
  stringstream ss(s);
  list<string> l;
  while (ss >> point) {
    l.push_back(point);
  }
  point = l.back();
  return point.length();
}
int main(int argc, char **argv) {
  string s;
  cout << "Enter the string: ";
  getline(cin, s);
  int ans = lenghtOfLastWord(s);
  printf("Lenght of last word in string is: %d\n", ans);
  return 0;
}
