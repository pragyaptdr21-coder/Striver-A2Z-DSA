#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,-1,3,2,-2,-8,1,7,10,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int maxi = 0 ;
    
    unordered_map<int, int> mpp;

    for(int i=0 ; i<n ; i++){
        s = s + arr[i];
        if(s==0){
             maxi = i+1;
        }
        else{ //reach  the end without finding [mpp.end()]
             if (mpp.find(s) != mpp.end()) {
                // maximize length
                maxi = max(maxi, i - mpp[s]);
      }
      // first time seeing this sum
      else {
        // record index
        mpp[s] = i;
      }
    
    }
    }

    cout << "largest subarray with 0 sum length : " << maxi ;
}    
