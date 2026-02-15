// You are given a positive integer n
// Print a triangle of 2n−1
//  rows.
// Input
// The input contains a single integer n
//  (1≤n≤200
// ).

// Output
// Print the vertical triangle of stars, as shown in the example.

// Examples
// Input
// 4
// Output
// *
// * *
// * * *
// * * * *
// * * *
// * *
// *
// Input
// 7
// Output
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
// * * * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// *

#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}