#include <iostream>
using namespace std;

//  Array Insertion
void insert(int size, int index, int ar[])
{

    cout << "In the function" << endl;
    for (int i = size - 1; i >= index; i--)
    {

        ar[i] = ar[i - 1];
    }

    ar[index] = 1000;

    cout << "End of the function" << endl;
}



//  Deletion of elements 
 void deletee(int size, int index, int a[]) {

int b = a[index];
    size--;

    for(int i=index;i<size;i++) {

        a[i] = a[i+1] ;
    }

 }


 

int main()
{
    int n = 5;
    int a[n];

    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Input done\n";

    //insert(6, 3, a);
    //deletee(5, 2, a);

    cout << "Final array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
