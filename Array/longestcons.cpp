//longest consecutive sequence
#include <bits/stdc++.h>
using namespace std;

//optimal solution
int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest = 1;

        unordered_set<int> st;
        for(int i=0 ; i<n ; i++){
            st.insert(nums[i]);
        }

        if(n==0){
            return 0 ;
        }

        for(auto it: st){
            if(st.find(it-1)==st.end()){
                int cnt = 1;
                int x = it ;
    
            while(st.find(x+1)!=st.end()){
                x++;
                cnt++;
            }

            longest = max(longest , cnt);
        }
    }

        return longest;
        
}

//better solution
int main(){
    vector<int> nums = {102,4,100,1,1,3,3,2,1,1,101,2,2,4};
    int n = 14;
    int longest =1;
    int lastsmaller = INT_MIN;
    int cnt = 0;
    sort(nums.begin(),nums.end());
    for(int i=0 ; i<n ; i++){
        if(nums[i]-1==lastsmaller){
            cnt++;
            lastsmaller = nums[i];
        }
        else if(nums[i]!= lastsmaller){
            cnt = 1;
            lastsmaller = nums[i];
        }
        longest = max(longest , cnt);
    }

        cout<<longest;
        cout << endl;
        cout<<longestConsecutive(nums);


}