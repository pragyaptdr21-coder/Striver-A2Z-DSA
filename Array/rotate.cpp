//Left rotate the array by one place

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

    //solution 
    int temp = arr[0];
    for(int i = 1 ; i<n ; i++){
        arr[i-1] = arr[i] ;
    }
    arr[n-1]= temp ;

     for(int i =0 ; i<n ; i++){
        cout << arr[i];
    }
}

// tc = O(n)
//sc = O(1)  //extra space 
//sc = O(n)  //space used in algorithm
