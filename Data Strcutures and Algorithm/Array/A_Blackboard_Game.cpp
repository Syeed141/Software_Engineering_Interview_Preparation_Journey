#include<iostream>


using namespace std;


int main () {

int t,n;
cin>>t;
while(t--) {

cin>>n;

if(n<3){
    cout<<"Alice"<<endl;
    break;
}

else if (n%2!=0) {
    cout<<"Alice"<<endl;
}

else {
    cout<<"Bob"<<endl;
}



}


}