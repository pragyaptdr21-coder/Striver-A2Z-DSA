//Print 1 to N using Recursion

#include <iostream>
using namespace std;

void f(int i,int n){
    if (i>n){
        return;
    }
    else {
        cout << i << endl ;
        f(i+1,n);
    }
}

int main(){
    int n;
    cin >> n;
    cout << endl;
    f(1,n);
}

/*
TC = O(n)
SC = O(n)
*/

// BACKTRACKING [ without using i+1]

//Print 1 to N using Recursion

/*#include <iostream>
using namespace std;

void f(int i,int n){
    if (i<1){
        return;
    }
    else {
        f(i-1,n);
        cout << i << endl ;
    }
}

int main(){
    int n;
    cin >> n;
    cout << endl;
    f(n,n);
}

*/

