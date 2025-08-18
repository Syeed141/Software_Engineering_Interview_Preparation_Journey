#include <bits/stdc++.h>

using namespace std;


// Pair declaration 

pair <int,char> pr;

// map  declaration 

map <int, string> db;


int main () {

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

//  pr = make_pair(1,'A');
//  cout<< "First : " <<pr.first << "Second : " <<pr.second<<endl;


// Map :

// Map works with key and values
//  map <key,values > name;
// name[key] = value;


// cplusplus dot com !!!!!!!

db[101] = "Syeed";
db[102] = "Shams";
db[103] = "Sakib";

//cout<<"Name using map is : " << db[101] <<endl;

for(auto data : db) {

    cout<<data.first << " " <<data.second<<endl;
}

// to erase :

db.erase(101);


cout<< "After erasing ----------- + ------------" <<endl;


for(auto data : db) {

    cout<<data.first << " " <<data.second<<endl;
}





    return 0;
}