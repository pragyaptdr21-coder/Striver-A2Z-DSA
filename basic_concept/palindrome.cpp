//Check Palindrome number

#include <iostream>
using namespace std;

int main(){
    int s;
    cin >> s;
    cout << endl;
    int revnum = 0 ,ld=0;
    int dup = s;
    while(s>0){
        ld = s%10;  //extraction of digit
        s/=10;
        revnum = revnum*10+ld;  //reverse a number
    }

    if (revnum==dup){   // check 
        cout << "Palindrome" << endl;
    } else {
    cout << "Not a Palindrome" ; 
    } 
    
    return 0 ;
}