#include <iostream>
using namespace std;

int first(int arr[] , int n , int target){
    int low=0 , high = n-1 ;
    int first = -1 ;
    while(low <= high){
        int mid = (low + high)/2 ;
        if(arr[mid]==target){
            first = mid ;
            high = mid - 1 ;
        }
        else if (arr[mid] > target){
            high = mid -1 ;
        }
        else {
            low = mid + 1 ;
        }
    }
    return first ;
}

int last(int arr[] , int n , int target){
    int low=0 , high = n-1 ;
    int last = -1 ;
    while(low <= high){
        int mid = (low + high)/2 ;
        if(arr[mid]==target){
            last = mid ;
            low = mid + 1 ;
        }
        else if (arr[mid] > target) {
            high = mid -1 ;
        }
        else {
            low = mid + 1;
        }
    }
    return last ;
}


int main(){
    int arr[] = {2,4,6,8,8,8,11,13};
    int n = 8;
    int target = 8 ;
    int f = first(arr,n,target);
    int l = last(arr,n,target);
    cout << "{ " << f << " , " << l << " }" << endl;
    int ft = first(arr,n,10);
    int lt = last(arr,n,10);
    cout << "{ " << ft << " , " << lt << " }" ;
}