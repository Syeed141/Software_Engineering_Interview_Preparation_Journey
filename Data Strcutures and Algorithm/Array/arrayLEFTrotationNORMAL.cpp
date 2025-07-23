#include <iostream>

using namespace std;

int main()
{

    int a,k;
    cin >> a >> k;
    int Ar[a];
    cout << "Enter the values: " << endl;
    for (int i = 0; i < a; i++)
    {

        cin >> Ar[i];
    }

    
    for (int i = 0; i < a; i++)
    {

        cout << Ar[i] << " " ;
    }
    cout<<endl;

    while(k--) {

    // Left shift 1 bit
    int b = Ar[0];
    for (int i = 0; i < a - 1; i++)
    {

        Ar[i] = Ar[i + 1];
    }

    Ar[a - 1] = b;

   

   
    }

     cout << "Result after left shifting : " << endl;
    
     for (int i = 0; i < a; i++)
    {

        cout << Ar[i] << " " ;
    }
    cout<<endl;

    
}