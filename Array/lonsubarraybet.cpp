//Longest Subarray with sumk k 
//Need to print the length of the longest subarray with sum k {positive no.}
#include <bits/stdc++.h>
using namespace std;

//Better approach - prefix sum + hashmap approach
int main(){
    vector<int> arr = {1,2,3,1,1,1,1,4,2,3};
    int n = 10 ;
    int k = 3 ;

    map<long long , int >preSumMap ;  //stores prefixsum -> first index
    long long sum = 0 ; //running prefix sum
    int maxlen = 0 ; //answer

    for(int i=0 ; i<n ; i++){
        sum += arr[i] ; //update prefix sum till current index

        //subarray from index 0 to i has sum k
        if(sum==k){
            maxlen = max(maxlen , i+1);
        }

        //find required previous prefix sum
        long long rem = sum - k ;

        //if found , subarray sum becomes k

        if(preSumMap.find(rem)!= preSumMap.end()){
            int len = i - preSumMap[rem];
            maxlen = max(maxlen , len) ;
        }

        //stores first occurence only
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum] = i ;
        }
    }

    cout << maxlen ;
}

