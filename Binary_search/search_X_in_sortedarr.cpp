#include <iostream>
using namespace std;

int iterative_code(int arr[8] , int n , int target){
    int low = 0;
    int high = n-1 ;
    while(low<=high){
        int mid = (low + high)/2 ;
        if(arr[mid]==target){
            return mid;
        }
        else if (arr[mid] > target){
            high = mid - 1 ;
        }
        else {
            low = mid+1 ;
        }
    }

    return -1 ;
}

int recursive_code(int arr[8] , int n , int low , int high ,int target){
    if (low > high){
        return -1 ;
    }
    int mid = (low + high)/2 ;
    if(arr[mid]==target){
        return mid ;
    }
    else if (arr[mid]>target){
        return recursive_code(arr , n , low , mid-1 , target);
    }
    return recursive_code(arr , n , mid+1 ,high, target);
}

int main(){
    int arr[8] = {3,4,6,7,9,12,16,17};
    int n = 8 ; 
    cout <<"Iterative code running " << iterative_code(arr , n , 12)<<endl;
    cout <<"Recursive code running " << recursive_code(arr , n , 0 , n-1 ,12)<<endl;

}