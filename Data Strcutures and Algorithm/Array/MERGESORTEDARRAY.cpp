#include<iostream>


using namespace std;

int main () {

int n =3 , m =4;
int ar[n] = {1,2,3};
int br[m] = {2,3,5,6,8};
int i =0 , j =0;
int cr[n+m];
int k =0;
while (i<n && j<m){




if(ar[i] >= br[j]) {
cr[k] = br[j];
k++;
j++;
}
else {
cr[k] = ar[i];
k++;
i++;

}



}

while (i<n){

cr[k] = ar[i];
k++;
i++;

}

while (j<m) { 

cr[k] = br[j];
k++;
j++;

}


for(int i =0; i<n+m;i++){

   cout<<cr[i]<<endl;
}



}