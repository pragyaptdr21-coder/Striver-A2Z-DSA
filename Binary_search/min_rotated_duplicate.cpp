#include <iostream>
using namespace std;

int main(){
    int nums[] = {4,5,6,7,1,1,1,2,3};
    int n  = 9 ;
        int low = 0 ;
        int high = n-1 ;
        int ans = INT_MAX ;
        while(low <= high){
            int mid = (low + high)/2 ;
            if(nums[low]<= nums[high]){
                ans = min(ans , nums[low]);
                break;
            }
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low++ ;
                high--;
                continue;
            }
            if(nums[mid] >= nums[low]){
                ans = min(ans , nums[low]);
                low = mid + 1 ;
            }
            else {
                ans = min(ans , nums[mid]);
                high = mid - 1 ;
            }
        }
        cout <<"Minimum in rotated sorted array is : " << ans ; 
}
