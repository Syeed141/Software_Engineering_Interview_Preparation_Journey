#include <iostream>

using namespace std;

bool valid(int ni, int nj, int N, int M)
{

    if (ni >= 0 && nj >= 0 && ni < N && nj < M)
    {

        return true;
    }

    else
    {

        return false;
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int N, M, x, y;
    cin >> N >> M;
    char Mat[N][M];

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < M; j++)
        {
            cin >> Mat[i][j];
        }
    }

    cin >> x >> y;
    x--;
    y--;
    int dx[] = {0, 0, -1, 1, -1, 1, 1, -1};
    int dy[] = {1, -1, 0, 0, 1, 1, -1, -1};
    bool ans = true;
    int ni, nj;
    for (int i = 0; i < 8; i++)
    {

        ni = x + dx[i];
        nj = y + dy[i];
     
        if (valid(ni, nj, N, M) && Mat[ni][nj] != 'x')
        {
            
            ans = false;
        }
    }

    if (ans)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}

