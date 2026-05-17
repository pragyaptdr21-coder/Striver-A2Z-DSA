//Highest occuring element in an Array

#include <iostream>
#include<cmath>
using namespace std ;

int main (){
    int n ;
    cin >> n ;
    cout << endl;
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin >> arr[i] ;         //array input
    }

    int hash[n+1] = {0} ;   //pre compute

    
    for(int j = 0 ; j<n ; j++){
        hash[arr[j]] ++ ;    //hash array -- > count frequencies
    }

    //find max frequency element
    int maxcount = 0;
    int answer = 0 ;
    for(int k = 0 ; k<n ; k++){
        if(hash[k]>maxcount){
            maxcount = hash[k] ;
            answer = k ;    //index = element
        }

    }

    cout << answer << endl ;
    return 0 ;
}