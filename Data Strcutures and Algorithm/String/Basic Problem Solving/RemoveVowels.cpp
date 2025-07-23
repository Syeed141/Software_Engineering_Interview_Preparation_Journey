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

string test = "aeiouggeergAEIOU";
string ans = "";

for (char c : test) {

    if(string("AEIOUaeiou").find(c) == -1) {

        ans += c;

    }


}

cout<<ans;
    return 0;
}