#include<iostream>


using namespace std;


int main () {

int n =5;
int ar[n];
cout<<"Enter the values: "<<endl;
for (int i =0; i<n;i++) {

    cin>>ar[i];
}

for(int i =0; i<n/2;i++) {

    int a = ar[i];
    ar[i] = ar[n-1-i];
    ar[n-1-i] = a;


}

cout<<"Reversed array: "<<endl;
for (int i =0; i<n;i++) {

    cout<<ar[i];
}




}