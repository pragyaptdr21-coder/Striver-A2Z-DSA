//single element in sorted array[twice , one]
#include <iostream>
using namespace std ;

int fn(int nums[] , int n){
    if(n==1){
        return nums[0];
    }
    if(nums[0] != nums[1]){
        return nums[0];
    }
    if(nums[n-1]!=nums[n-2]){
        return nums[n-1];
    }
    int low = 1 ;
    int high = n-2 ;

    while(low <= high){
        int mid = (low + high)/2 ;
        if(nums[mid]!= nums[mid+1] && nums[mid]!= nums[mid-1]){
            return nums[mid];
        }
        // i am on the left half and el is on the right half 
        //eliminate left half
        if(((mid%2==1) && nums[mid-1]==nums[mid]) || ((mid % 2) == 0 && nums[mid]==nums[mid+1])){
            low = mid+1 ;
        }
        else{
            high = mid-1 ;  //eliminate right half
        } 
    }
    return -1 ;
}

int main(){
    int nums[] = { 1,1,2,2,3,3,4,5,5,6,6};
    int n = 11 ;
    cout <<"single element is : " << fn(nums , n);
    return 0 ;
}