//array is sorted or not

#include <iostream>
using namespace std ;

int main(){
    int n;
    cin >> n ;
    cout << endl;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>> arr[i];
    }

    for(int i =0 ; i<n-1 ; i++){
        if(arr[i] > arr[i+1]){
            cout << "false";
            return 0 ;
        }
    }
    
    cout << "true" ;

}