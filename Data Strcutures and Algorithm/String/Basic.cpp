#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<numeric> // for accumulate

using namespace std;

int main () {

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

// String declarations 
string emptyStr;                      // An empty string: ""
string strHello("hello");             // Initialized with C-style string
string strWorld = "world";            // Direct initialization
string repeatedX(5, 'x');             // String with 5 'x': "xxxxx"
string copyHello = strHello;          // Copy constructor

// String appending and concatenation
string sentence = "Hello";
sentence.push_back('!');              // Append character → "Hello!"
sentence += " World";                 // Append using += operator
sentence.append("!!!");               // Append using member function

// Accessing string elements
cout << sentence[0] << endl;          // Access using index (no bounds check)
cout << sentence.at(0) << endl;       // Access using at() (with bounds check)
cout << sentence.front() << endl;     // First character
cout << sentence.back() << endl;      // Last character

cout << sentence.size() << endl;      // Number of characters
cout << sentence.length() << endl;    // Same as size()
cout << sentence.capacity() << endl;  // Current capacity (can be larger than size)

// Shrink extra capacity
sentence.shrink_to_fit();

// Iterating through characters
for (char ch : sentence)
    cout << ch << " ";
cout << endl;

for (int i = 0; i < sentence.size(); i++)
    cout << sentence[i] << " ";
cout << endl;

// Insert, erase, and replace operations
string greeting = "hello";
greeting.insert(1, "!!!");                 // Insert at index 1 → h!!!ello
greeting.erase(5, 3);                      // Remove 3 characters from index 5
greeting.replace(0, 5, "Hi");              // Replace first 5 chars with "Hi"
greeting.replace(greeting.begin(), greeting.begin() + 2, "Yo"); // Using iterators

// Remove last character
greeting.pop_back();

// Clear string
greeting.clear();

// Check if empty
if (greeting.empty())
    cout << "String is empty" << endl;

// Iterate using iterator
string word = "hello";
for (string::iterator it = word.begin(); it != word.end(); it++)
    cout << *it << endl;

// Sort a string
string name = "hello";
sort(name.begin(), name.end());               // Ascending
sort(name.begin(), name.end(), greater<char>()); // Descending

// Reverse a string
string revName = "hello";
reverse(revName.begin(), revName.end());

// Find operations
string sentence2 = "hello world";
int firstL = sentence2.find('l');
int firstO = sentence2.find_first_of('o');
int lastO = sentence2.find_last_of('o');
int firstNotH = sentence2.find_first_not_of('h');
int lastNotD = sentence2.find_last_not_of('d');

cout << firstL << " " << firstO << " " << lastO << " " << firstNotH << " " << lastNotD << endl;

// Get unique characters
string chars = "eeeedbcccdbbbbdccaaabbbbaaa";
sort(chars.begin(), chars.end());
auto uniqueEnd = unique(chars.begin(), chars.end());
chars.erase(uniqueEnd, chars.end());
cout << chars << endl; // Output: abcde

// Get min and max character
string letters = "bdacfehg";
auto minChar = min_element(letters.begin(), letters.end());
auto maxChar = max_element(letters.begin(), letters.end());
cout << *minChar << " " << *maxChar << endl;

// Count occurrences of a character
string spell = "abracadabra";
int countA = count(spell.begin(), spell.end(), 'a');
cout << countA << endl; // Output: 5

// Replace all characters
string stars = "abracadabra";
fill(stars.begin(), stars.end(), '*');
cout << stars << endl;

// Rotate characters
string rotateStr = "abcde";
rotate(rotateStr.begin(), rotateStr.begin() + 3, rotateStr.end()); // Left rotate by 3 → "deabc"
cout << rotateStr << endl;

rotate(rotateStr.begin(), rotateStr.end() - 3, rotateStr.end()); // Right rotate by 3 → "abcde"
cout << rotateStr << endl;

// Sum of character ASCII values
string sumStr = "abcde";
int asciiSum = accumulate(sumStr.begin(), sumStr.end(), 0);
cout << asciiSum << endl; // 97+98+99+100+101 = 495

// Substring extraction
string underscoreStr = "hello_world";
cout << underscoreStr.substr(4, 5) << endl;  // Output: o_wor
cout << underscoreStr.substr(6) << endl;     // Output: world

// Extract words using stringstream and getline
string inputLine;
getline(cin, inputLine);

stringstream stream(inputLine);
string singleWord;
while (stream >> singleWord)
    cout << singleWord << endl;

return 0;
}
