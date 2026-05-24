//Left rotate an array by k places

#include <bits/stdc++.h>
using namespace std;

void bruterotate(int arr[],int n , int k){
    k = k % n ;
    int temp[k-1] ;
    // storing elements in temporary array
    for(int i = 0 ; i<k ; i++){
        temp[i] = arr[i] ;
    }

    //shifting 
    for(int j = k ; j<n ; j++){
        arr[j-k] = arr[j];
    }
    
    //place back temporary into array
    for(int l = n-k ; l<n ; l++){
        arr[l]=temp[l-(n-k)];
    }

    for(int i=0 ; i<n ; i++){
        cout << arr[i] ;
    }
}

void optimalrotate(int arr[] , int n , int k){
    k = k%n ;
    reverse(arr , arr+k) ;
    reverse(arr+k , arr+n);
    reverse(arr , arr+n);

    for(int i=0 ; i<n ; i++){
        cout << arr[i] ;
    }
}

int main (){
    int n;
    cin >> n ;
    cout << endl;

    int k;
    cin >> k ;
    cout << endl ;

    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>> arr[i];
    }

    bruterotate(arr , n , k) ;
    cout << endl ;

    optimalrotate(arr , n ,k);   // here it will rotate bruterotate array
}


