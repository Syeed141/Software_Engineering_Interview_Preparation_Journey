#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, string> db;

  // Insertion
  db[101] = "Syeed";         // method 1
  db.insert({102, "Shams"}); // method 2
  db.emplace(103, "Sakib");  // method 3 (efficient)

  // Traversal
  for (auto data : db)
    cout << data.first << " " << data.second << endl;

  // Access by key
  cout << db[101] << endl;

  // Find
  if (db.find(102) != db.end())
    cout << "102 found: " << db[102] << endl;

  // Erase
  db.erase(101);

  // Size
  cout << "Size = " << db.size() << endl;

  // Clear
  db.clear();
}
