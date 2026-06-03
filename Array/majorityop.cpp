#include <iostream>
using namespace std;

int main(){
    int nums[16] = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n = 16 ;
        int el ;
        int cnt=0 ;
        for(int i=0 ; i<n ; i++){
            if(cnt==0){
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }

        int cnt1 = 0 ;
        for(int i=0 ; i<n ; i++){
            if(nums[i]==el){
                cnt1++;
            }
        }

        if(cnt1>n/2){
            cout << el;
        }

        return -1 ;
}