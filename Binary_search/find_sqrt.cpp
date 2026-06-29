//Find the floor of the square root of given integer
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    int low = 1 ; 
    int high = n ;
    int ans = 1;
    while(low <=high){
        int mid = (low + high) / 2 ;
        if((mid*mid)> n){
            high = mid - 1;
        }
        else if ((mid*mid)<=n){
            low = mid + 1 ;
            ans = mid ;   //or directly can say high represents the ans 
        }
    }

    cout << "Floor of the square root of given integer: " << ans ;
}