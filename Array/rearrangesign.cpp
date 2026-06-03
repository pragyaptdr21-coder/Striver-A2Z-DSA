#include <iostream>
#include <vector>
using namespace std ;

int main(){
    vector<int> nums = {1,2,-4,-5,3,-6};
    int n = nums.size();

    //variety 1 - [equal -ve & =ve numbers]
        vector<int> ans(n , 0) ;
        int posIndex = 0 ;
        int negIndex = 1 ;
        for(int i=0 ; i<n ; i++){
            if(nums[i]<0){
                ans[negIndex] = nums[i];
                negIndex+=2;
            }
            else{
                ans[posIndex] = nums[i];
                posIndex+=2 ;
            }
        }

        for(int i = 0 ; i<n ; i++){
            cout << ans[i] <<" ";
        }    
}