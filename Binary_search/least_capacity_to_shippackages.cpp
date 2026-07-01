#include <bits/stdc++.h>
using namespace std ;

// Function to check how many days needed for given capacity
int fun(int weights[] , int cap , int n){
    int load = 0 ;
    int days = 1 ;
    for (int i=0 ; i<n ; i++){
        if((load + weights[i]) > cap){
            days = days + 1 ;
            load = weights[i];
        }
        else{
            load += weights[i];
        }
    } 

    return days ;
}

// Function to find minimum ship capacity to ship in d days
int  brutesol_shipWithinDays(int weights[] , int n , int days){
    int maxi = *max_element(weights , weights + n) ;
    int sum = 0 ;
    for(int i=0 ; i<n ; i++){
        sum += weights[i];
    }

    for(int cap = maxi ; cap <= sum ; cap++){
        int daysreq = fun(weights , cap , n) ;
        if(daysreq <= days){
            return cap ;
        } 
    }

    return sum ;
}

int main(){
    int weights[]= {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    int days = 5 ;
    cout << brutesol_shipWithinDays(weights, n , days);
   
}