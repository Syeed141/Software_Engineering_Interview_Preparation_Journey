#include <iostream>

using namespace std;

int main()
{

    int a[3] = {1, 2, 3};
    int b[4] = {4, 5, 6, 7};

    int c[7];
    int k = 0;
    for (int i = 0; i < 3; i++)
    {

        c[k] = a[i];
        k++;
    }

    for (int i = 0; i < 4; i++)
    {

        c[k] = b[i];
        k++;
    }

    for (int i = 0; i < 7; i++)
    {

        cout << c[i] << " " << endl;
       
    }
}