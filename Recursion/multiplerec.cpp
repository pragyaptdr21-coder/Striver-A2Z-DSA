//Multiple recursion calls

//FIBONACCI [0 1 1 2 3 5 ... ]
#include <iostream>
using namespace std;

int f(int n){
    if(n<=1){
        return n;
    }
    else{
        int last = f(n-1);
        int slast = f(n-2);
        return last + slast ;
    }
}

int main(){
    int n ;
    cin >> n;
    cout << endl;
    cout<<(f(n));

    return 0 ;
}

//TC = O(2^n) [exponential]