#include <bits/stdc++.h>
using namespace std;

//optimal solution
int main(){
    int arr[] = {4,2,2,6,4};
    int k = 6;

    map<int,int> mpp ;
    int xr = 0 ;
    int cnt = 0;
    mpp[xr]++ ; //[0,1]

    for(int i=0 ; i<5 ; i++){
        xr = xr^arr[i];
        int x = xr^k ;
        cnt += mpp[x];
        mpp[xr]++;
    }

    cout << cnt ;


}