#include <bits/stdc++.h>
using namespace std;

int main() {
  // Basic pair
  pair<int, string> p1 = make_pair(1, "Syeed");
  cout << p1.first << " " << p1.second << endl; // 1 Syeed

  // Another way
  pair<int, string> p2(2, "Shams");

  // Nested pair
  pair<int, pair<string, double>> student = {101, {"Sakib", 3.75}};
  cout << student.first << " " << student.second.first << " "
       << student.second.second << endl;

  return 0;
}
