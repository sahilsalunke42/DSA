#include <iostream>
using namespace std;

int nFact(int n){
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }

    return ans;
}

int main(){
    int n, r;
    cin >> n >> r;
    
    int nFactorial = nFact(n);
    int rFactorial = nFact(r);
    int nrFactorial = nFact(n-r);

    int ans = nFactorial/(rFactorial*nrFactorial);

    cout << ans << endl;
}


// this code was edited