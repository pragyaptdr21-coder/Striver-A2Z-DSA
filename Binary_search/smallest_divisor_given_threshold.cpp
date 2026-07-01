#include <bits/stdc++.h>
using namespace std;

int sumofD(int nums[], int divisor,int n){
    int sum = 0 ;
    for(int x = 0 ; x < n ; x++){
        sum += ceil((double)nums[x]/ divisor);
    }
    return sum ;
}


int smallestDivisor(int nums[], int threshold , int n) {
    int low = 1;
    int high = *max_element(nums , nums + n);
    while(low<=high){
        int mid = (low + high)/2 ;
        if(sumofD(nums,mid,n) <= threshold){
            high = mid - 1;
        }
        else{
            low = mid + 1 ;
        }
    }
return low ;
    
}


int main(){
    int nums[] = {1,2,5,9};
    int n = 4 ;
    cout << "Find the smallest divisor given a threshold: " << smallestDivisor(nums,6,n);

}