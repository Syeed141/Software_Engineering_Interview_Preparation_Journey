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

string s = "aabfegsahhxbczz";

vector <int> freq(26,0);

for (char x : s) {

    freq[x-'a']++;
}

for(int i = 0; i<26;i++){

    cout<<char(i+'a') << " : " << freq[i] <<endl;

}


    return 0;
}