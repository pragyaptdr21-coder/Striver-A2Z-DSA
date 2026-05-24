//Remove duplicates in place from sorted array

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
    int i = 0;
    for(int j =0 ; j<n ; j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }

    cout << i+1 ;      //size of the array after modification
 
}

