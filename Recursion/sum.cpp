/*SUM OF FIRST N NUMBERS
        |         |
        v         v
Parameterized  Functional way
*/

#include <iostream>
using namespace std;

// parameterized way
void p(int i , int sum){
    if (i<1){
        cout << sum ;
        return;
    }
    else {
        p(i-1,sum +i);
    }
}

// function way
int f(int n){
    if (n==0){
        return 0;
    }
    else {
        return n + f(n-1);
    }
}

int main (){
    int n ;
    cin >> n ;
    cout << endl ; 
    p(n,0);
    cout << endl;
    cout<<f(n);
}

//TC = O(n)
//SC = O(n)