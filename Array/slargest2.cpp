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

    //Optimal solution 
    int largest = 0;
    int slargest = -1 ;  //assuming all emements are positive
    for(int i =0 ; i<n ; i++){
        if(arr[i]>largest){
            slargest= largest ;
            largest = arr[i];
        }

        //if(arr[i]>slargest && arr[i]!= largest){
            //slargest = arr[i];
        //}

        else if (arr[i]< largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }

    cout << slargest ;

}

