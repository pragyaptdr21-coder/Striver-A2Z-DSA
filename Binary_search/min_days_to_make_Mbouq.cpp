#include <iostream>
using namespace std;

bool possible(int bloomDay[], int n ,int day ,int m, int k){
    int cnt = 0 ;
    int noOfB = 0;
   
    for (int i = 0 ; i<n ; i++){
        if(bloomDay[i]<= day){
            cnt ++ ;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0 ;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m ;
}    

int minDays(int bloomDay[], int n , int m, int k) {
    long long val = m * 1LL * k * 1LL ;
    if(val > n) return -1;
    int mini = INT_MAX , maxi = INT_MIN ;
    for(int i=0 ; i< n ; i++){
        mini = min(mini , bloomDay[i]);
        maxi = max(maxi , bloomDay[i]);
    }
    int low = mini , high = maxi ;
    while(low <= high){
        int mid = (low + high)/2 ;
        if(possible(bloomDay , n ,mid , m ,k)){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return low ;
    
}


int main(){
    int bloomDay[] = {7,7,7,7,13,11,12,7};
    int m =2 ,k=3 ;
    int n = sizeof(bloomDay)/sizeof(bloomDay[0]);

    cout << "Minimum no. of days to make M bouquets : " << minDays(bloomDay ,n , m ,k) ;
}