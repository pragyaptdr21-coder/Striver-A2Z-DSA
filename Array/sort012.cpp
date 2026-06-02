#include <iostream>
using namespace std;

int main(){
    int nums[11] = {0,1,1,0,1,2,1,2,0,0,0};
        int n = 11 ;
        int low = 0 ,mid=0 , high = n-1 ;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }

        for(int i=0 ; i<n ; i++){
            cout<<nums[i]<<" ";
        }
}