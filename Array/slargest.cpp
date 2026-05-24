#include <iostream>
using namespace std;

int main (){
    int n;
    cin >> n ;
    cout << endl;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>> arr[i];
    }

    //better solution 
    int largest = 0;
    for(int i =0 ; i<n ; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    int slargest = -1 ;
    for(int i=0;i<n;i++){
        if(arr[i]>slargest && arr[i]!=largest){
            slargest=arr[i];
        }
    }

    cout << slargest ;

}

//TC = O(2n)