#include <bits/stdc++.h>
using namespace std;

long double minimiseMaxDistance(int nums[] , int k , int n){
    vector<int> howMany(n-1 , 0);
    for(int gasStation = 1 ; gasStation<=k ; gasStation++){
        long double maxSection = -1 ;
        int maxIndx = -1 ;
        for(int i=0 ; i<n-1 ; i++){
            long double diff = nums[i+1] - nums[i];
            long double sectionlength = diff/(long double) (howMany[i] + 1 ) ;
            if(sectionlength > maxSection){
                maxSection = sectionlength ;
                maxIndx = i ;
            }
        }
        howMany[maxIndx]++;
    }

    long double maxAns = -1 ;
    for(int i=0 ; i<n-1 ; i++){
        long double diff = (nums[i+1] - nums[i]);
        long double sectionlength = diff/(long double)(howMany[i]+1);
        maxAns = max(maxAns , sectionlength);

    }
    
    return maxAns ;
    
}


long double minmaxdistancebetter(int nums[] , int k , int n){
    vector<int> howMany(n-1 , 0 );
    priority_queue<pair<long double , int >> pq ;
    for(int i=0 ; i<n-1 ; i++){
        pq.push({(nums[i+1]-nums[i]) , i});
    }
    for(int gasstation = 1; gasstation<= k ; gasstation++){
        auto tp = pq.top() ; pq.pop();
        int secInd = tp.second ;
        howMany[secInd]++ ;
        long double inidiff = nums[secInd+1] - nums[secInd];
        long double newSeclen = inidiff /(long double) (howMany[secInd] + 1);
        pq.push({newSeclen , secInd});
    }

    return pq.top().first ;
}

int numberofGasStationRequired(long double dist , int nums[] , int n){
    int cnt = 0;
    for(int i = 1 ;i<n;i++){
        int numberInBetween = ((nums[i] - nums[i-1])/dist) ;
        if((nums[i]-nums[i-1])/dist == numberInBetween * dist){
            numberInBetween--;
        }
        cnt += numberInBetween;
    }
    return cnt;
}

long double minimiseMaxDistanceBs(int nums[] , int k , int n){
    long double low = 0 ;
    long double high = 0 ;
    for(int i =0 ; i<n-1 ; i++){
        high = max(high , (long double) (nums[i+1] - nums[i])) ;
    }

    long double diff = 1e-6;
    while(high - low > diff){
        long double mid = (low + high) / (2.0);
        int cnt = numberofGasStationRequired(mid , nums , n);
        if(cnt > k){
            low = mid ;
        }
        else{
            high = mid ;
        }
    }
    return high ;
}

int main(){
    int nums[] = {1,13,17,23};
    int k = 5 ;
    int n = 4 ;
    cout << "Minimise max distance to Gas stations brute : " <<minimiseMaxDistance(nums , k ,n) << endl ;
    cout << "Minimise max distance to Gas stations better : " <<minmaxdistancebetter(nums , k ,n) << endl ;
    cout << "Minimise max distance to Gas stations Bs: " <<minimiseMaxDistanceBs(nums , k ,n) << endl ;
}