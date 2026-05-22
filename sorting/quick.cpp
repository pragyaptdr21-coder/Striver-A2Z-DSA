//Quick sort
//pivot , partition , recurse

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low , int high){
    int pivot = arr[low];    //first element as pivot
    int i = low ;            //moves from left
    int j = high ;           //moves from right

    while(i<j){

        //find element greater than pivot from left side
        while(arr[i]<=pivot && i <=high - 1){
            i++;
        }

        //find element smaller than pivot from right side
        while(arr[j]>pivot && j>=low+1){
            j--;
        }

        //wrong side elements found then swap them     [smaller elements on left , greater on right]
        if(i<j){ 
            swap(arr[i],arr[j]);
        }
    }
    //place pivot at correct sorted position
        swap(arr[low],arr[j]);

        //return pivot index
        return j ;
}

void qs(vector<int> &arr,int low , int high){
    if (low<high) {
        int pIndex = partition(arr,low,high);
        qs(arr,low,pIndex-1);
        qs(arr,pIndex+1,high);
    }
}

vector<int> quickSort(vector<int> arr){
    qs(arr , 0 , arr.size()-1);
    return arr ;
}

int main(){

    int n ;
    cin >> n ;
    cout << endl ;

    vector<int> arr(n) ;

    //input array
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ; 
    }

    //sort array
    arr = quickSort(arr);

    //print sorted array
    for(int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }

    return 0 ;

}