//Check for Prime number

#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    cout << endl ;
    int cnt =0 ;
    for(int i=1;i*i<=n ;i++){   //Mathematical observation - sqrt approach
        if(n%i==0){
            cnt++;
            if(n/i!=i)
            cnt++;
        }
    }   

    if(cnt == 2){
        cout<<"Prime no.";
    }
    else{
        cout<< "Not a Prime number";
    }
}

//TC = O(sqrt(n))