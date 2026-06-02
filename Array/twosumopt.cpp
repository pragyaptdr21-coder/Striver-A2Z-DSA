#include <bits/stdc++.h>
using namespace std;

//optimal solution only for yes/no 
int main(){
    int nums[5] = {2,6,5,8,11};
    int target = 14 ;
    int n = 5 ;
    int left = 0 ;
    int right = n-1 ;
    sort(nums,nums+n);
    while(left<right){
        int sum = nums[left] + nums[right] ;
        if(sum == target){
            cout<<"YES" ;
            return 0 ;
        }
        else if (sum < target){
            left++;
        }
        else {
            right--;
        }    
    }

    //return "No";
    cout << "No" ;
}