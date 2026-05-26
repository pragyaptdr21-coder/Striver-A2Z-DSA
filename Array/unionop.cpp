//Union of two sorted arrays

#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main(){
    int arr1[] = {1,1,2,3,4,5};
    int arr2[]= {2,3,4,4,5,6};
    cout << endl;

    int n = 6;
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int i =0 ;
    int j =0 ;
    vector<int> unionarr;

    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(unionarr.size()==0 || unionarr.back() != arr1[i]){
                unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0 || unionarr.back() != arr2[j]){
                unionarr.push_back(arr2[j]);
            }
            j++;
        }
    }
    
    while(i<n){
        if(arr1[i]<=arr2[j]){
            if(unionarr.size()==0 || unionarr.back() != arr1[i]){
                unionarr.push_back(arr1[i]);
            }
            i++;
        }
    }

    while(j<m){
        if(unionarr.size()==0 || unionarr.back() != arr2[j]){
            unionarr.push_back(arr2[j]);
        }
        j++;
    }

    cout << endl ;
    for(int k=0 ; k<unionarr.size();k++){
        cout << unionarr[k] <<" ";
    }
}
    
    

