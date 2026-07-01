#include <iostream>
using namespace std ;

int main(){
    int arr[] = {2 ,3,4,7,11};
    int k = 5;
    int n = 5 ;
    int low = 0 , high = n-1 ;
    while(low <= high){
        int mid = (low + high)/2 ;
        int missing = arr[mid] - (mid + 1) ;
        if(missing < k ) low = mid + 1 ;
        else high = mid - 1 ;
    }

    cout << "Kth missing positive number is  " <<  high + k + 1 ;
        
    
}