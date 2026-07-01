#include <bits/stdc++.h>
using namespace std;

bool canweplaced(int arr[] , int dist ,int cows , int n){
    int cntcows = 1;
    int lastC = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(arr[i] - lastC >= dist){
            cntcows++;
            lastC = arr[i];
        }
        if(cntcows >= cows) return true ;
    }
    return false ;
}

int brute(int arr[] , int cows , int n){
    for(int i=1 ; i< (arr[n-1]-arr[0]) ; i++ ){
        if (canweplaced(arr,i,cows,n)==true){
            continue;
        }
        else{
            return (i-1);
        }
    }
    return -1 ;
}

int Bs(int arr[] , int cows , int n){
     int low = 0 ;
    int high = arr[n-1] - arr[0] ;
    while(low <= high){
        int mid = (low + high) / 2 ;
        if(canweplaced(arr,mid,cows,n) == true) {
            low = mid + 1 ;
        }
        else {
            high = mid - 1;
        }
    }

    return high ;
}

int main(){
    int arr[] = {0,3,4,7,10,9} ;
    int cows = 4 ;
    int n = 6 ;
    sort(arr , arr + n ) ;

    cout << "min distance between cows is max : " << brute(arr,cows,n)<<endl;
    cout << "min distance between cows is max : " << Bs(arr,cows,n)<<endl;
   
}