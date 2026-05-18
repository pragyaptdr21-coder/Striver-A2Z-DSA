//BUBBLE SORT
//PUSH THE MAX TO THE LAST BY ADJACENT SWAP

#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap = 0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                //swapping of two numbers
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp ;
            didswap = 1 ;
                
            }
        }
        if(didswap==0){
            break;
        }
        cout << "runs\n" ;
        
    }

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n;i++){    //taking array input
        cin >> arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;
}


//TC = O(n^2)   //n[n+1]/2     //worst / avg 
//TC = O(n) //best TC  [need to do some optimiztion]
/*
loop breaks if no swa  is done */
