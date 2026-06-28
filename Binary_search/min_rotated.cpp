//find minimum in rotated sorted array [unique]
#include <iostream>
using namespace std;

int main(){
    int nums[] = {4,5,6,7,0,1,2};
    int n  = 7 ;
        int low = 0 ;
        int high = n-1 ;
        int ans = INT_MAX ;
        while(low <= high){
            int mid = (low + high)/2 ;
            if(nums[low]<= nums[high]){
                ans = min(ans , nums[low]);
                break;
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
