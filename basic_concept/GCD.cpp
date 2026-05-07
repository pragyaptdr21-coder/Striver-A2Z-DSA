//GCD or HCF

#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n1 , n2 ;
    cin >> n1 >> n2 ;
    cout << endl ;
    int gcd = 1 ;

    for(int i = 1 ; i<= min(n1,n2); i++){
        if(n1%i==0 && n2%i==0){
            gcd = i ;
        }
    }

    cout << gcd ;

    return 0 ;
}

// TC = O(min(n1,n2))

//Euclidean algorithm
/*
gcd(a,b)= gcd(a-b,b)  //a>b
truncated till a-b becomes zero and then b is gcd
*/

/*
a , b
gcd(a,b) = gcd(a%b , b)  a>b

while(a>0 && b>0){
if(a>b)
a = a%b ;
else
b = b%a ;
}

if(a ==0)
gcd == b ;
else
gcd == a ;

// TC = O(log(phi)min(a,b))


*/