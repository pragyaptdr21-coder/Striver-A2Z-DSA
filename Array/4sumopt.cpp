#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,2,1,2,3,3,3,5,4,4,5,4};

    int n = nums.size();
    int target = 8 ;
    vector<vector<int>> ans;

    sort(nums.begin(),nums.end());
    for(int i=0 ; i<n ; i++){
        if (i>0 && nums[i]==nums[i-1]){
            continue;
        }
        for(int j = i+1 ; j<n ; j++){
            // make sure it never have any duplicate
            if (j!= i+1 && nums[j]==nums[j-1]){
            continue;
        }
        int k = j+1 ;
        int l = n-1 ;
        while(k<l){
            long long sum = nums[i]+nums[j];
            sum += nums[k];
            sum += nums[l];

            if(sum==target){
                vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                ans.push_back(temp);
                k++;
                l--;
                while(k<l && nums[k]==nums[k-1]){
                    k++;
                }
                while(k<l && nums[l]==nums[l+1]){
                    l--;
                }
            }
            else if(sum <target){
                    k++;
            }
            else l-- ;
        }    
    }

    for(auto row : ans){
        for(auto x : row){
            cout << x << " ";
        }

        cout << '\n';
    }

    return 0 ;
}
}