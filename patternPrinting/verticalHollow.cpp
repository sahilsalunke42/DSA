// You are given a positive integer n
// Print a hollow triangle of 2n−1
//  rows.
// Input
// The input contains a single integer n
//  (1≤n≤200
// ).

// Output
// Print the inverted vertical triangle of stars, as shown in the example.

// Examples
// InputCopy
// 5
// OutputCopy
// * 
// * * 
// *   * 
// *     * 
// *       * 
// *     * 
// *   * 
// * * 
// * 
// InputCopy
// 3
// OutputCopy
// * 
// * * 
// *   * 
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
            if (j == 1 || j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

