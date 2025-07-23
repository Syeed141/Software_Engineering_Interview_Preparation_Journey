#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main () {

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

vector <int> v = {1,2,3,2,3,4,5,6};

int val; cin>>val;

while(find(v.begin(),v.end(),val)!=v.end()){


    auto it = find(v.begin(),v.end(),val);
    v.erase(it);
}

for(int x : v) {

    cout<<x << " " ;
}

//O(N^2)
cout<<endl;


vector <int> a = {1,2,3,4,4,4,5,1,2,3,4};

int b; cin>>b; 

auto it = remove(a.begin(),a.end(),b);


a.erase(it,a.end());


for (int y : a) {

    cout<< y << " ";
}

//O(N)



    return 0;
}



