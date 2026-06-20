#include <bits/stdc++.h>
using namespace std;

void brute(int arr[] , int n){
    int cnt = 0 ;
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<=n-1 ; j++){
            if(i<j && arr[i]>arr[j]){  //condition
                cnt++;
            }
        }
    }

    cout << "Brute approach , " <<"No. of pairs where left element > right element : " ;
    cout << cnt << endl;    //return no. of pairs
}

//merge concept [optimal approach ]
int merge(int arr[], int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    // Variable to count inversions
    int cnt = 0;

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); // All remaining left elements are inversions
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

     // Return inversion count
    return cnt ;
}

int mergeSort(int arr[], int low, int high) {
    // Variable to store inversion count
    int cnt = 0;

    // Base case
    if (low >= high) return cnt;

    int mid = (low + high) / 2 ;

    cnt += mergeSort(arr, low, mid);  // left half
    cnt += mergeSort(arr, mid + 1, high); // right half

    cnt += merge(arr, low, mid, high);  // merging sorted halves
    
    return cnt;
}

int numberofInversions(int arr[], int n)
{
    return mergeSort(arr, 0, n - 1);
}

void optimal(int arr[] , int n){
    int cnt = numberofInversions(arr, n);
    cout << "Optimal solution: "<< endl ;
    cout << "The number of inversions are:  "
         << cnt << endl;
}

int main(){
    int arr[] = {5,3,2,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    brute(arr,n);
    optimal(arr,n);
}
