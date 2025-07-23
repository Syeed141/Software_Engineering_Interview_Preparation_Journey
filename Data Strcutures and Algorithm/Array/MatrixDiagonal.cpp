#include<iostream>

using namespace std;

int main () {

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin>>n;
int a[n][n];

int primary = 0;
int secondary = 0;

for (int i = 0; i<n;i++){

    for(int j = 0; j< n; j++) {
        cin>>a[i][j];
        }
    }


for (int i = 0; i<n;i++){

    for(int j = 0; j< n; j++) {

        if(i==j) {

             primary += a[i][j];

        }

        if((i+j) == (n-1)) {

           
            secondary += a[i][j];
        }
    }
}


cout<<abs(primary-secondary)<<endl;

}