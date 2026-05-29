//long subarray with sum k (positive and zeroes)
//optimal approach --> sliding windows (two pointers)

#include <bits/stdc++.h>

using namespace std ;

void longestsubarraywithsumk(vector<int> a ,long long k){
    int left =0 , right =0 ;

    long long sum = a[0]; //current window sum
     int maxlen =0 ; //stores longest valid length

     int n = a.size() ;

     while(right < n){
        // if sum becomes larger than k
        // shrink window from left 
        while(left <= right && sum > k){
            sum -= a[left];
            left ++ ;
        }

        //valid window found
        if (sum == k){
            maxlen = max (maxlen , right - left + 1) ;
        }

        //expand window
        right ++ ;

        //include new element in window
        if(right < n){
            sum += a[right];
        }
     }

     cout <<  maxlen ;

}

int main(){
    vector<int> a = {1,2,3,1,1,1,1,3,3};
    int k =6 ;
    longestsubarraywithsumk(a , k) ;
}