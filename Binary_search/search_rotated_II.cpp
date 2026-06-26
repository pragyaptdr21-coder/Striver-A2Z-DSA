//Search in a rotated sorted numsay I [unique elements]
#include <iostream>
using namespace std ;

bool fn(int nums[] , int n , int target){
    int low=0 , high = n-1 ;
    while(low <= high){
        int mid = (low + high)/2 ;
        if(nums[mid]==target){
            return true;
        }
        if(nums[low] == nums[mid] && nums[mid]==nums[high]){
            low++ , high-- ;
            continue;
        }
        //left sorted
        if (nums[low] <= nums[mid]){
            if(nums[low] <= target && target <= nums[mid]){
                high = mid - 1 ;
            }
            else {
                low = mid + 1;
            }
        }
        //right sorted
        else {
             if(nums[mid] <= target && target <= nums[high]){
                low = mid + 1 ;
            }
            else {
                high = mid - 1;
            }

        }
    }
    return false;
}

int main(){
    int nums[] = {7,8,9,1,2,3,3,3,4,5,6};
    int n = 11 ;
    int target = 3 ;

    cout << fn(nums,n,target);

}