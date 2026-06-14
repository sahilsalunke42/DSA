#include <iostream>
using namespace std;

int main (){
    int marks[100];

    for (int i = 0; i < 100; i++)
    {
        cin >> marks[i];
    }
    cout << "Last value: " << marks[99] << endl;   
}