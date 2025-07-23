#include <iostream>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int M, N;
    cin >> N >> M;
    int a[N][M];

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        int x = 0;
        int y = M - 1;

        while (x < y)
        {

            swap(a[i][x], a[i][y]);

            x++;
            y--;
        }
    }




     for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < M; j++)
        {
            cout<<a[i][j] << " ";
        }
        cout<<endl;
    }
}