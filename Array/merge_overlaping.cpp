#include <bits/stdc++.h>
using namespace std;

int main(){
    //optimal solution
    vector<vector<int>> arr = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
        int n = arr.size();
        std::sort(arr.begin(),arr.end());
        vector<vector<int>> ans;

        for(int i=0 ; i<n ; i++){
            int start = arr[i][0];
            int end = arr[i][1];
            if(ans.empty() || arr[i][0] > ans.back()[1]){
                    ans.push_back(arr[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1] , arr[i][1]);        
            }
        }

        cout << "Merged Intervals \n" ;

        for(auto row : ans){
            cout << "[ ";
            for(auto x : row){
                cout << x << " ";
            }
            cout <<"]\n";
        }
        
        return 0;
    
}