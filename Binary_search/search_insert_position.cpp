#include <iostream>
using namespace std;

int search_insert_position(int arr[] , int n , int target){
    int low = 0;
    int high = n-1 ;
    int ans = n;
    while(low<=high){
        int mid = (low + high)/2 ;
        if (arr[mid] >= target){
            ans = mid ;
            high = mid - 1 ;
        }
        else {
            low = mid+1 ;
        }
    }

    return ans ;
}

int main(){
    int arr[] = {1,2,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6 ;  //ans = 3
    cout<< search_insert_position(arr,n,target)<<endl;
    cout<< search_insert_position(arr,n,2)<<endl;   //1
}