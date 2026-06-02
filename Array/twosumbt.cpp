#include <bits/stdc++.h>
using namespace std;

//Better solution
int main(){
    int nums[5] = {2,6,5,8,11};
    map<int , int> mpp;
    int target = 14;
    int n = 5 ;
    for(int i = 0 ; i<n ; i++){
        int num = nums[i];
        int moreNeeded = target - num ;
        if(mpp.find(moreNeeded) != mpp.end()){
            cout<<mpp[moreNeeded]<<" " << i ;
        }
        mpp[num] = i ;
    }
    return (-1 , -1 );
}