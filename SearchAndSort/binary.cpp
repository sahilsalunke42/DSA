#include <iostream>
using namespace std;


int main(){
    int l, r, mid;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    l =0;
    r = n-1;
    
    bool flag = false;

    while(l<=r){
        mid = (l+r)/2;
        if(arr[mid] == 9){
            flag = true;
            cout << "Element found in tha array at index: " << mid;
            break;
        }
        else if(arr[mid] < 9){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
        cout << "Iteration: " << l << " to " << r << endl;
    }
    if(!flag){
        cout << "Element not found in the array";
    }


}
