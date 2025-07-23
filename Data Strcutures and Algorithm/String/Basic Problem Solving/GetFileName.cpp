#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main () {

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

string path = "/user/code/hello.cpp";

int pos = path.find_last_of('/');

cout<<path.substr(pos+1);




    return 0;
}