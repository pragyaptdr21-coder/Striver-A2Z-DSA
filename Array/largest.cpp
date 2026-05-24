//largest element in an array

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

    //optimal solution 
    int largest = 0;
    for(int i =0 ; i<n ; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout << largest ;

}

