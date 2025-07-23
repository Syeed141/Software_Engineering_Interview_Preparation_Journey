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


string s = "abcdef";

for(char &c : s) {


    if(islower(c)) {
        c = toupper(c);
    }

    else {
        c = tolower(c);
    }

}

cout<<s<<endl;


    return 0;
}