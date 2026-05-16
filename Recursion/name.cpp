//RECURSION - When a function calls itself until a specified condition is met.

//PRINT NAME N TIMES USING RECURSION

#include <iostream>
using namespace std;

void f(int i,int n){
    if (i>n){
        return ;
    }
    else {
        cout<<"Pragya"<<endl;
        f(i+1 , n);
    }
}

int main (){
    int n;
    cin >> n;
    cout << endl;
    f(1,n);  
}

/*
TIME COMPLEXITY - O(n)
SPACE COMPLEXITY - O(n)  //In 'space complexity" we generally assume the "stack space".
*/