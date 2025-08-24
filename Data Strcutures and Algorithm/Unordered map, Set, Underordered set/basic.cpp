#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  /*
  ---------------- MAP ----------------
  - Stores key-value pairs.
  - Keys are sorted automatically.
  - Internally uses a Red-Black Tree.
  - Time complexity: O(log n) for insert, delete, search.
  - Duplicate keys are not allowed.

  Example:
      map<int, string> mp;
      mp[1] = "Apple";
      mp[3] = "Banana";
      mp[2] = "Orange";
      // Output: (sorted by key)
      // 1 -> Apple
      // 2 -> Orange
      // 3 -> Banana
  */

  /*
  ------------- UNORDERED MAP ----------------
  - Stores key-value pairs.
  - Keys are NOT sorted.
  - Internally uses a hash table.
  - Time complexity: O(1) average for insert, delete, search (worst O(n)).
  - Duplicate keys are not allowed.

  Example:
      unordered_map<string, int> ump;
      ump["pen"] = 10;
      ump["book"] = 5;
      ump["pencil"] = 20;
      // Output order is unpredictable
  */

  /*
  ---------------- SET ----------------
  - Stores only unique elements.
  - Elements are always sorted.
  - Internally uses a Red-Black Tree.
  - Time complexity: O(log n) for insert, delete, search.
  - Duplicates are automatically ignored.

  Example:
      set<int> s;
      s.insert(5);
      s.insert(1);
      s.insert(3);
      s.insert(5); // ignored
      // Output: 1 3 5
  */

  /*
  ------------- UNORDERED SET ----------------
  - Stores only unique elements.
  - Elements are NOT sorted.
  - Internally uses a hash table.
  - Time complexity: O(1) average for insert, delete, search.
  - Duplicates are automatically ignored.

  Example:
      unordered_set<int> us;
      us.insert(5);
      us.insert(1);
      us.insert(3);
      us.insert(5); // ignored
      // Output order is unpredictable
  */

  /*
  --------- QUICK COMPARISON TABLE ---------
  Container         | Order    | Duplicates | Internals       | Complexity
  ------------------|----------|------------|----------------|------------
  map               | Sorted   | No         | Red-Black Tree | O(log n)
  unordered_map     | Unsorted | No         | Hash Table     | O(1) avg
  set               | Sorted   | No         | Red-Black Tree | O(log n)
  unordered_set     | Unsorted | No         | Hash Table     | O(1) avg
  */

  return 0;
}
