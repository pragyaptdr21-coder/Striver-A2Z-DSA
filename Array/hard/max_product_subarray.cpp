#include <bits/stdc++.h>
using namespace std;

void brute(int arr[] , int n){
    int maxi = INT_MIN ;
    for(int i = 0 ; i<n ; i++){
        for(int j = i ; j<n ; j++){
            int prod = 1;
            for(int k = i ; k<=j ; k++){
                prod = prod * arr[k];
            }
            maxi = max(maxi , prod);
        }
    }
    cout << "Calling brute approach"<< endl ;
    cout << maxi << endl ;
}

void better(int arr[] , int n){
    int maxi = arr[0];
    for(int i =0 ; i<n ; i++){
        int prod = 1;
        for(int j = i ; j<n ; j++){
            prod = prod * arr[j];
            maxi = max(maxi , prod);       
       }
    }
    cout << "Calling better approach"<< endl ;
    cout << maxi << endl ;
}

void optimal(int arr[] , int n){
    int pfx = 1 , sfx = 1 ; //prefix & suffix
    int maxi = INT_MIN ;
    for(int i = 0 ; i<n ; i++){
        pfx = pfx * arr[i];
        sfx = sfx * arr[n-i-1];
        if(pfx == 0){
            pfx = 1;
        }
        if(sfx == 0){
            sfx = 1 ;
        }
        maxi = max(maxi , max(pfx ,sfx));
    }
    cout << "Calling optimal approach"<< endl ;
    cout << maxi << endl ;

}

int main(){
    int arr[] = {2,3,-2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    brute(arr , n) ;
    better(arr , n);
    optimal(arr , n);
}