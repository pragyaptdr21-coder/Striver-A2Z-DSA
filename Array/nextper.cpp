//next permutation
#include <bits/stdc++.h>
#include <vector>
using namespace std ;

void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1 ;
        for(int i = n-2 ; i >= 0 ; i--){
            if(nums[i]<nums[i+1]){
                index = i ;
                break ;
            }
        }

        if(index == -1){
            reverse(nums.begin(),nums.end());
            return ;
        }

        for(int i = n-1 ; i> index ; i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }    
        }

        reverse(nums.begin()+index+1,nums.end());
        
}

int main(){
    vector<int> nums = { 2 ,1,5,4,3,0,0};
    nextPermutation(nums);
    for(int i =0 ; i<nums.size(); i++){
        cout<< nums[i]<<" " ;
    }
}