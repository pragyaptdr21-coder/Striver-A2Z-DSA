//BINARY SEARCH ON 2D ARRAY
#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr , int n , int x){
    int low =0 , high = n-1 ;
    int ans = n ;
    while(low<= high){
        int mid = (low + high)/2 ;
        if(arr[mid] >= x){
            ans = mid ;
            high = mid - 1;
        }
        else{
            low = mid + 1 ;
        }
    }
    return ans ;
}

int rowwithMax1s(vector<vector<int>>& matrix, int n , int m){
    int cnt_max = 0 ;
    int indx = -1 ;
    for(int i = 0 ; i<n ; i++){
        int cnt_ones = m - lowerBound(matrix[i] , m , 1);
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones ;
            indx = i ;
        }
    }
    return indx ;
}

int main(){
    vector<vector<int>> matrix ;
    int n ;
    int m ;
    cout << "Index of row with maximum 1's : " <<rowwithMax1s(matrix , n ,m);
    
}