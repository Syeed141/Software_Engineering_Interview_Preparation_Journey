#include<iostream>
#include<vector>

using namespace std;

int main () {

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif


vector <int> freq = {1,2,3,4,7,5,6,1,1,1,2,3,4};

vector <int> a(7,0);

for (int x : freq) {

    a[x]++;
}

for (int i=0;i<a.size();i++) {

    cout<<i<< "= " <<a[i]<< endl; 
}

    return 0;
}