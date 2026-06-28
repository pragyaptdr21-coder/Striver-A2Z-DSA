//Find how many times has an array been rotated.
// [unique]
#include <iostream>
using namespace std;

int main(){
    int nums[] = {4,5,6,7,0,1,2};
    int n  = 7 ;
        int low = 0 ;
        int high = n-1 ;
        int ans = INT_MAX ;
        int index = -1 ;
        while(low <= high){
            int mid = (low + high)/2 ;
            if(nums[low]<= nums[high]){
                if(nums[low] < ans){
                    index = low ;
                    ans = nums[low];
                }
                break;
            }
            if(nums[mid] >= nums[low]){
                if(nums[low] < ans){
                     index = low;
                     ans = nums[low];
                } 
                low = mid + 1 ;
            }
            else {
                if(nums[mid] < ans){
                    index = mid ;
                    ans = nums[mid];
                }
                high = mid - 1 ;
            }
        }
        cout <<"Array has been rotated : " << index << " times"; 
}
