#include <bits/stdc++.h>
using namespace std;
//brute approach
int main(){
    vector<int> nums = {1,-1,0,2,-2,0};

    set<vector<int>> st ;
    int n = nums.size();
    int target = 0 ;

    for(int i=0 ; i<n ; i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                long long sum = nums[i]+nums[j];
                sum += nums[k];
                sum += nums[l];
                if(sum == target){
                    vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                    }
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin() ,st.end());

    for(auto row : ans){
        for(auto x : row){
            cout << x << " ";
        }

        cout << "\n" ;
    }
}