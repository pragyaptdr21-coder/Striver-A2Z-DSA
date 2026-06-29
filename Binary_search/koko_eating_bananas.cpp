#include <bits/stdc++.h>
using namespace std;

int findmax(int piles[] , int n){
    int maxi = INT_MIN;
    
    for(int i=0 ; i<n ; i++){
        maxi = max(maxi , piles[i]);
    }
    return maxi;
}

long long calculatetotalhrs(int piles[] , int n , int hourly){
   
    long long totalh = 0;
    for(int i=0 ; i<n ; i++){
        totalh += ceil((double)piles[i] / hourly);
    }

    return totalh;
}    


int minEatingSpeed(int piles[],int  n ,  int h) {
    int low = 1 ;
    int high = findmax(piles , n);
    while(low <= high){
        int mid = low + (high - low) / 2;
        long long totalhrs = calculatetotalhrs(piles ,n , mid);
        if(totalhrs <= h){
            high = mid - 1;
        }
        else{
            low = mid + 1 ;
        }
    }

    return low ;
    
}

int main(){
    int piles[] = {3 ,6,7,11};
    int h = 8 ;
    int n = sizeof(piles)/sizeof(piles[0]);

    cout << "The min integer such that koko can eat all bananas within h hours : " << minEatingSpeed(piles , n ,h);

}