#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main () {

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


vector <int> p ={1,2,3,10,4,5,6,7,1,2,3};





sort(p.begin(),p.end());

auto last = unique(p.begin(),p.end());

p.erase(last,p.end());

for (int x : p) {


    cout<<x << " " ;
}




    return 0;
}