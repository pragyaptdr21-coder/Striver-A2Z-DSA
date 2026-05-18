//SELECTION SORT

//ALGORITHM - SELECT MINIMUM AND SWAP

#include <iostream>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini = i ;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        //swapping of two numbers
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp ;
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n;i++){    //taking array input
        cin >> arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;
}


//TC = O(n^2)   //n[n+1]/2