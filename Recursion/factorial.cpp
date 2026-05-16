//Factorial of a given number

#include <iostream>
using namespace std;

// parameterized way
void p(int i , int sum){
    if (i<1){
        cout << sum ;
        return;
    }
    else {
        p(i-1,sum*i);
    }
}

// function way
int f(int n){
    if (n==1){
        return 1;
    }
    else {
        return n *f(n-1);
    }
}

int main (){
    int n ;
    cin >> n ;
    cout << endl ; 
    p(n,1);
    cout << endl;
    cout<<f(n);
}

//TC = O(n)
//SC = O(n)