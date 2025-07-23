#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main () {

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

 string a = "listen";
 string b = "silent";

 sort(a.begin(),a.end());
 sort(b.begin(),b.end());

 cout << (a == b ? "Yes" : "No") <<endl;

    return 0;
}