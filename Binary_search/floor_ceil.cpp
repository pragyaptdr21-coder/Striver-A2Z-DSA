#include <iostream>
using namespace std;

int floor_code(int arr[] , int n , int target){
    int low = 0;
    int high = n-1 ;
    int ans = -1 ;
    while(low<=high){
        int mid = (low + high)/2 ;
        if (arr[mid] <= target){
            ans = arr[mid] ;
            low = mid + 1 ;
        }
        else {
            high = mid-1 ;
        }
    }

    return ans ;
}


int ceil(int arr[] , int n , int target){
    int low = 0;
    int high = n-1 ;
    int ans = -1 ;
    while(low<=high){
        int mid = (low + high)/2 ;
        if (arr[mid] >= target){
            ans = arr[mid] ;
            high = mid - 1 ;
        }
        else {
            low = mid+1 ;
        }
    }

    return ans ;
}

int main(){
    int arr[] = {10 ,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 25 ;  //ans = 30
    
    cout<<"floor: "<< floor_code(arr,n,target)<<endl;
    cout<<"ceil: "<< ceil(arr,n,target);
}