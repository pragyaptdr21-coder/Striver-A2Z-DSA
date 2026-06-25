#include <iostream>
using namespace std;

int upper_bound(int arr[] , int n , int target){
    int low = 0;
    int high = n-1 ;
    int ans = n;
    while(low<=high){
        int mid = (low + high)/2 ;
        if (arr[mid] > target){
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
    int arr[] = {2,3,6,7,8,8,11,11,11,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 6 ;  //ans = 3
    cout<< upper_bound(arr,n,target);

}