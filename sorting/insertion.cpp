//INSERTION SORT
//TAKES AN ELEMENT & PLACE IT IN ITS CURRENT ORDER.

#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j = i ;
        while(j>0 && arr[j-1]>arr[j]){
            //swapping of two numbers
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp ; 
            j--; 
            cout << "runs\n" ;   //for already sorted its 0 runs as there is no swaps happened 
        }
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n;i++){    //taking array input
        cin >> arr[i];
    }

    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;
}

/*
TC
worst/avg case = O(n^2)
best case = O(n)
*/