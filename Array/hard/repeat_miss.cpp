//find the repeatinng and missing no.
#include <bits/stdc++.h>
using namespace std;

void brute(int arr[] , int n){
    
    int missing = -1 ;
    int repeating = -1 ;
   for(int i=1 ; i<=n ; i++){
        int cnt = 0;   
        for(int j = 0 ; j<n ; j++){
            if(arr[j]== i){
                cnt++;
            }
        }
    if(cnt==2){
        repeating = i ;
    }
    if(cnt==0){
        missing = i;
    }
    if(repeating!=-1 && missing!=-1){
        break;
    }
   }

   cout << "Brute approach" << endl ;
   cout << "repeating no : " <<repeating << endl ;
   cout << "Missing no : " << missing << endl ;
}


void better(int arr[] , int n){
        int hash[n+1] = {0};
        for(int i=0 ; i<n ; i++){
            hash[arr[i]]++;
        }
        int repeating = -1 , missing = -1 ;

        for(int i=1;i<=n ; i++){
            if(hash[i]==2){
                repeating = i ;
            }
            if(hash[i]==0){
                missing = i ;
            }
            if (repeating != -1 && missing != -1){
                break ;
            }
        }

   cout << "Better approach" << endl ;
   cout << "repeating no : " <<repeating << endl ;
   cout << "Missing no : " << missing << endl ;
}


void optimal_sol1(int arr[] , int n){
    
    long long sn = (n*(n+1))/2 ; //take long long to avoid overflow
    long long s = 0 , s2 = 0 ;
    long long s2n = ((n)*(n+1)*(2*n+1))/6;

   for(int i = 0 ; i<n ; i++){
        s += arr[i] ;
        s2 += (long long) arr[i]* (long long) arr[i] ;
   } 

   //s - sn = x - y
   // s2 - s2n = x^2 - y^2  || (x-y) (x+y)

   long long val1 = s - sn ;  // x - y
   long long val2 = s2 - s2n ;

   val2 = val2 / val1 ;  // x + y
   long long x = (val1 + val2) / 2; // x = repeating
   long long y = x - val1 ; // y = missing

   cout << "Optimal sol 1 , sum approach" << endl ;
   cout << "repeating no : " << (int) x << endl ;
   cout << "Missing no : " << (int) y << endl ;
}


void optimal_sol2(int arr[] , int n){
    int xr = 0 ;
    for(int i=0; i<n ;i++){
        xr = xr ^ arr[i] ;
        xr = xr ^ (i+1) ; 
    }

    int bitno = 0 ;
    while(1){
        if((xr & (1<<bitno)) != 0){
            break ;
        }
        bitno++ ;
    }

    int zero = 0 ;
    int one = 0 ;

    for(int i=0 ;i<n ; i++){
        //part of 1 club
        if((arr[i] & (1<<bitno)) != 0){
            one = one ^ arr[i];
        }

        //zeroth club
        else{
            zero = zero ^ arr[i];
        }
    }

    for(int i = 1 ; i<= n ; i++){
        //part of 1 club
        if((i & (1<<bitno)) != 0){
            one = one^ i;
        }

         //zeroth club
        else{
            zero = zero ^ i;
        }
    }

    int cnt = 0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] == zero){
            cnt++;
        }    
    }

    cout << "Optimal sol 2 , XOR method " <<endl;
    if(cnt ==2){
        cout << "Repeating: " << zero << "  Missing: " << one << endl;
    }

    cout << one << " " << zero ;

}


int main(){
    int arr[] = {4 ,3, 6, 2, 1, 1};
    int n = 6;

    brute(arr , n);
    cout << endl ;
    better(arr , n);
    cout << endl ;
    optimal_sol1(arr , n);
    cout << endl ;
    optimal_sol2(arr , n);
}
