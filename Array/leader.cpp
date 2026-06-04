//Leaders in  an array / superior elements
#include <bits/stdc++.h>
using namespace std ;

int main(){
    //o(n)
    vector<int> arr = { 10,22,12,3,0,6};
    int maxi = INT_MIN ;
    vector<int> ans ;
    int n = arr.size();
    //o(n)
    for(int i = n-1 ; i>=0 ; i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
    // keep track of right max
        maxi = max(maxi , arr[i]);
    }
     
    //o(nlogn)
    sort(ans.begin() , ans.end());

    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i]<<" ";
    }

}