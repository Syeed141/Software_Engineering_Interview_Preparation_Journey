#include <bits/stdc++.h>

using namespace std;

int main () {

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

string test = "I am trying my best";

stringstream ss(test);

string word;

string ans;

while (ss >> word) {

    word[0] = toupper(word[0]);

    ans += word;
    ans += " ";


}

ans.pop_back();

cout<<ans;


    return 0;
}