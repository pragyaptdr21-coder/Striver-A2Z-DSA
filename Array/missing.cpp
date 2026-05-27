//find missing no. in an array

#include <iostream>
#include<vector>
using namespace std;

void brute_sol(int arr[] , int N ){
    int n = N-1 ;
    int flag = 0 ;
    for(int i=1 ; i<=N ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr[j]==i){
                flag = 1 ;
                break;
            }
        }
        if(flag == 0){
            cout << i << endl ;
        }
    }
}

void better_sol(int arr[] , int N){
    int hash[N]={0};
    int n= N-1 ;
    for(int i=0 ; i<n ;i++ ){
            hash[arr[i]]=1;
        }
    for(int i=1 ;i<=N ;i++){
        if(hash[i]==0){
            cout << i << endl ;
        }
    }
}

void opt1(int arr[] , int N){
    int sum = (N*(N+1))/2 ;
    int s2 = 0 ;
    int n = N-1 ;
    for(int i=0 ; i<n ; i++){
        s2+=arr[i];
    }

    cout << sum - s2 << endl ;

}

void opt2(int arr[] , int N ){
    int n = N-1 ;
    int xor1=0 , xor2 =0 ;
    for(int i=0 ; i<n ; i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);   // its i+1 
    }
    xor1 = xor1 ^ N ;

    int missing_no = xor1^xor2;
    cout << missing_no ;
}

int main(){
    int arr[4] = {1,2,4,5 };
    int N = 5 ;   //arr.size() + 1
    int n = 4 ;   //arr.size()
    brute_sol(arr , N);
    better_sol(arr,N);
    opt1(arr,N);
    opt2(arr,N);

    return 0 ;
}