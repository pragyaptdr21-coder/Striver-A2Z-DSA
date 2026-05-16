//check if string is palindrome or not

#include <iostream>
using namespace std;

bool f(string s,int i,int n){
    if(i>=n/2){
    return true ;
    }

    if (s[i]!=s[n-i-1]){
        return false;
    }

    return f(s,i+1,n);
}

int main(){
    string s;
    cin >> s;
    int n = s.length();
    cout << endl;

    if (f(s,0,n)){
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0 ;
}

//TC = O(n/2)
//SC = O(n/2)