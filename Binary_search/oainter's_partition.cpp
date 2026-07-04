#include <bits/stdc++.h>
using namespace std;

int fun(int nums[] , int pages , int n){
    int std = 1;
    int pagesstd = 0 ;
    for(int i=0 ; i<n ; i++){
        if(pagesstd + nums[i] <= pages){
            pagesstd += nums[i];
        }
        else{
            std++;
            pagesstd = nums[i];
        }
    }

    return std;

}

int Bs(int nums[] , int n , int k){
     int low = *max_element(nums , nums+n);
     int high = 0 ;
     for(int i=0 ; i<n ; i++){
        high += nums[i];
    }

    if(k > n){
        return -1 ;
    }

    while(low <= high){
        int mid = (low + high)/2 ;
        int cntstd = fun(nums , mid , n);
        if(cntstd > k){
            low = mid + 1 ;
        }
        else {
            high = mid - 1 ;
        }
    }

    return low ;
}


int main(){
    int nums[] = {10 ,20,30,40};
    int n = 4 ;
    int k = 2 ;
}