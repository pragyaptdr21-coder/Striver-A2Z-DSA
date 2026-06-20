#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,-1,0,2,-2,-1};

    set<vector<int>> st ;
    int n = nums.size();
    int target = 0 ;

    for(int i=0 ;i<n;i++){
        for(int j = i+1 ; j<n ; j++){
            set<int> hashset;
            for(int k = j+1; k<n ;k++){
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long fourth = target - (sum) ;
                if(hashset.find(fourth)!= hashset.end()){
                    vector<int> temp = {nums[i],nums[j],nums[k],int(fourth)};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }

    vector<vector<int>> ans(st.begin(),st.end());

    for(auto row : ans){
        for(auto x : row){
            cout << x << " ";
        }

        cout << '\n';
    }
}