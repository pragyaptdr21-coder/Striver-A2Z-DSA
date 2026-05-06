//Reverse a number

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << endl;
    int ans = 0;
    while(n>0){
        int lastdgt = n%10 ;  //extraction of digit
        n/=10;
        ans = ans*10 + lastdgt ;   //reverse a no.
    }
    cout << ans ;  
    
    return 0 ;
}