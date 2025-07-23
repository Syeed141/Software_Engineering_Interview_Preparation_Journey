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

    string test = "I am trying my best";

    for(char &c : test) {

        if(c ==' '){

            c = '_';
        }


    }

    cout<<test;





    return 0;
}