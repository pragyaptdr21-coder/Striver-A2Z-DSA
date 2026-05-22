//MERGE SORT --> DIVIDE , Sort , MERGE

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void merge(vector<int> &arr , int low ,int mid ,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
     
    while(left<=mid && right <= high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left ++ ;
        }
        else{
            temp.push_back(arr[right]);
            right ++ ;
        }  
    }
 // if stil  some elements left on left side copy them
    while(left<=mid){
        temp.push_back(arr[left]);
        left ++ ;
    }
//if elements left on right side copy them 
    while(right<=high){
        temp.push_back(arr[right]);
        right ++ ;
    }
//Place them in original array
    for (int i=low ; i<=high ; i++){
        arr[i] = temp[i-low] ;
    }
}

void mS(vector<int> &arr, int low, int high){
    if(low>=high){
        return ;
    }
    int mid = (low + high)/2 ;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high) ;
}

int  main(){
    int n ;
    cin >> n ;
    cout << endl ;
    vector<int> arr(n) ;
    for(int i =0 ; i<n ; i++){
        cin >> arr[i] ;   //take input array
    }

    mS(arr, 0 , n-1) ;

    for(int i =0 ; i<n ; i++){
        cout << arr[i] ;   //Display an sorted array
    }

    return 0 ;

}


/*

dividing by 2 at every step

TC = [n*log(n)[base 2]]

*/