/*
print the boundary elements of the 2d array

1 2 3 5
4 5 2 6
4 1 5 6
1 2 5 8

op:
1 2 3 5
4     6
4     6
1 2 5 8

*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        };
    }
    cout << endl;

    for (int j = 0; j < m; j++)
    {
        cout << arr[0][j] << ' ';
    };

    for ( int  i = 1; i < n; i++)
    {
        cout
    }
    
}