//find the nth root of m 
#include <iostream>
using namespace std;

int func(int mid , int n){
    long long ans = 1;
    while(n>0){
        if(n % 2 == 1){
            ans = ans * mid ;
            n = n-1 ;
        }
        else {
            mid = mid*mid ;
            n = n/2 ;
        }
    } 
    //mid ^ n
    return ans ;
}

int nthroot (int n , int m){
    int low = 1 , high = m ;
    while(low<=high){
        int mid = (low + high) / 2;
        int midn = func(mid , n);
        if(midn == m){
            return mid ;
        }
        else if (midn < m){
            low = mid + 1 ;
        }
        else{
            high = mid - 1 ;
        }
    }
    return -1 ;
    
}

//overflow condition [mid^n] , rewrite code 
//return 1 if == m
//return 0 if < m
//return 2 if > m
int fn(int mid , int n , int m){
    long long ans = 1 ;
    for(int i = 1;i<=n ; i++){
        ans = ans * mid ;
        if(ans > m) return 2 ; //stop
    }
    if(ans == m) return 1 ;
    return 0 ;

}

int nth_root (int n , int m){
    int low = 1 , high = m ;
    while(low<=high){
        int mid = (low + high) / 2;
        int midn = fn(mid , n , m);
        if(midn == 1){
            return mid ;
        }
        else if (midn == 0){
            low = mid + 1 ;
        }
        else{
            high = mid - 1 ;
        }
    }
    return -1 ;
    
}



int main(){
    int n = 3 ;
    int m = 27 ;
    cout << nthroot(n , m) << endl ;
    cout << nth_root(4,69) ;
}