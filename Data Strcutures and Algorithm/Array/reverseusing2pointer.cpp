#include<iostream>

using namespace std;


int main () {


int n =5;
int ar[n];
cout<<"Enter the values: "<<endl;
for (int i =0; i<n;i++) {

    cin>>ar[i];
}

int i ,j;
i = 0;
j = n-1;
 while (i != j) {


    int a = ar[i];
    ar[i] = ar[j];
    ar[j] = a;

    i++;
    j--;




 }

cout<<"Reversed array: "<<endl;
for (int i =0; i<n;i++) {

    cout<<ar[i];
}







}