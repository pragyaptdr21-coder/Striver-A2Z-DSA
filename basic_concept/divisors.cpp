//Print all Divisors

#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n){
    vector<int> ls ;
    for(int i =1; i <= sqrt(n) ; i++){   //sqrt approach
        if(n%i==0){
            ls.push_back(i);
            if(n/i!=i){
                ls.push_back((n/i));
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : ls) cout << it << " ";

}

int main(){
    int n ;
    cin >> n ;
    cout << endl ;
    printDivisors(n);

   return 0 ; 
}



 /*
        Mathematical observation
        for(int i = 1 ; i <= sqrt(n) ; i++){
        if(n%i==0){
        print(i)}
        else if (n/i)!=i
        print (n/i)
        }

        // TC = O(sqrt(n))
_______________________________________________________________________

    
    for(int i=1 ; i<=n ; i++){   
        if(n%i==0){
        cout<<i<<endl;
        }
    }

        */