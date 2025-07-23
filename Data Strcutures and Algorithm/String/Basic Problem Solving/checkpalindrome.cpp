#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main () {

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

string s; 
getline(cin,s);
cin.ignore();
string r = s;
reverse(r.begin(),r.end());


cout<<(s == r ? "Yes" : "No")<<endl;
    return 0;
}