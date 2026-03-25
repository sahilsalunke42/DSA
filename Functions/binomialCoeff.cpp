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

int nrFact(int n, int r) {
    int ans = 1;
    for (int i = 1; i <= n-r; i++)
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
    int nrFactorial = nrFact(n, r);

    int ans = nFactorial/(rFactorial*nrFactorial);

    cout << ans << endl;
}