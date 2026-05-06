//EXTRACTION OF DIGITS AND COUNT DIGITS

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << endl;
    int count = 0;
    while(n>0){
        int lastdgt = n%10 ;  //extraction of digit
        count++;
        n/=10;
    }
    cout << count ;   //count digit
    return 0 ;
}