//Move all zeroes to the end of the array

#include <iostream>
#include <vector>
using namespace std;

//optimal solution 
 void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        for(int i = 0 ; i<n ; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }

        if(j==-1){
            return ;
        }

        for(int i = j+1 ;i <n ; i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        
    }

int main(){
    int n;
    cin >> n ;
    vector<int> nums(n);
    cout << endl;
    for(int i=0 ; i<nums.size() ; i++){
        cin >> nums[i];
    }

    moveZeroes(nums);
    cout << endl ;
    for(int i=0 ; i<nums.size() ; i++){
        cout << nums[i];
    }

}
