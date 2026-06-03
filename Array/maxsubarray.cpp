//maximum subarray sum
#include <iostream>
using namespace std;

int main(){
    int nums[8] = {-2,-3,4,-1,-2,1,5,-3};
    int n = 8;
        int sum = 0 , maxi = INT_MIN , start = 0;
        for(int i=0 ; i<n ; i++){
            sum+=nums[i];
            
            if(sum>maxi){
                maxi = sum;
            }
            
            if(sum<0){
                sum = 0 ;
            }
        }
        cout << maxi;
}