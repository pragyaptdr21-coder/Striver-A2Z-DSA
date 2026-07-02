#include <bits/stdc++.h>
using namespace std;

int fun(int arr[] , int pages , int n){
    int std = 1;
    int pagesstd = 0 ;
    for(int i=0 ; i<n ; i++){
        if(pagesstd + arr[i] <= pages){
            pagesstd += arr[i];
        }
        else{
            std++;
            pagesstd = arr[i];
        }
    }

    return std;

}

int brute(int arr[] , int n , int students){
    int low = *max_element(arr , arr+n);
     int high = 0 ;
    for(int i=0 ; i<n ; i++){
        high += arr[i];
    }

    if(students > n){
        return -1 ;
    }

    for(int pages = low ; pages <= high ; pages++){
        int cntstd = fun(arr , pages , n);
        if(cntstd == students){
            return pages ;
        }
    }
    return -1 ;
}

int Bs(int arr[] , int n , int students){
     int low = *max_element(arr , arr+n);
     int high = 0 ;
     for(int i=0 ; i<n ; i++){
        high += arr[i];
    }

    if(students > n){
        return -1 ;
    }

    while(low <= high){
        int mid = (low + high)/2 ;
        int cntstd = fun(arr , mid , n);
        if(cntstd > students){
            low = mid + 1 ;
        }
        else {
            high = mid - 1 ;
        }
    }

    return low ;
}

int main(){
    int arr[] = {25 ,46 ,28, 49 ,24};
    int n = 5;
    int students = 4 ;
    cout << "The maximum number of pages assigned to a student is minimum are " << brute(arr,n,students)<<endl;
    cout << "The maximum number of pages assigned to a student is minimum are " << Bs(arr,n,5)<<endl;
    
}