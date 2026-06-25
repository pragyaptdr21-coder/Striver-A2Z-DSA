#include <iostream>
using namespace std;

int lower_bound(int arr[] , int n , int target){
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
    int arr[] = {1,2,3,3,5,8,8,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 9 ;  //ans = 7
    cout<< lower_bound(arr,n,target);

}