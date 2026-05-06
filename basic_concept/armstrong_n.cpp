//Armstrong number

#include <iostream>
#include <cmath>
using namespace std;

int cnt(int s){
    int cnt = 0 ;
    while(s>0){
        cnt++;
        s/=10;
    }
    return cnt;   //count digit
}

int main(){
    int s;
    cin >> s;
    cout << endl;
    int d = s ;
    int ans = 0;
    cnt(d);
    while(s>0){
        int digit = s%10;  //extraction of digits
        s/=10;
        ans = ans + pow(digit,cnt(d));   
    }

    if(ans==d){
        cout << "Armstrong no.";
    } else {
        cout << "Not an Armstrong no.";
    }

    return 0 ;
}