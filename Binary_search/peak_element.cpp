#include <iostream>
using namespace std;

int brute(int nums[] , int n){
    for(int i = 0 ; i<n ; i++){
        if((i==0 || nums[i-1]<nums[i]) && (i==(n-1) || nums[i] > nums[i+1])){
            return nums[i] ;
        }
    } 
    return -1 ;
}

int peak1(int nums[] , int n){
    if(n==1){
        return nums[0];
    }
    if(nums[0]>nums[1]){
        return nums[0];
    }
    if(nums[n-1] > nums[n-2]){
        return nums[n-1];
    }

    int low = 1 ;
    int high = n-2 ;
    while(low<=high){
        int mid = (low + high)/2 ;
        if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
            return nums[mid];
        }
        else if (nums[mid] > nums[mid - 1]){
            low = mid + 1;
        }
        else if (nums[mid] > nums[mid + 1 ]){
            high = mid -1 ;
        }
    }

    return -1 ;
}

int peak2(int nums1[] , int n){
    if(n==1){
        return nums1[0];
    }
    if(nums1[0]>nums1[1]){
        return nums1[0];
    }
    if(nums1[n-1] > nums1[n-2]){
        return nums1[n-1];
    }

    int low = 1 ;
    int high = n-2 ;
    while(low<=high){
        int mid = (low + high)/2 ;
        if(nums1[mid] > nums1[mid-1] && nums1[mid] > nums1[mid+1]){
            return nums1[mid];
        }
        else if (nums1[mid] > nums1[mid - 1]){
            low = mid + 1;
        }
        else{
            high = mid -1 ;
        }
    }

    return -1 ;
}

int main(){
    int nums[]= {1,2,3,4,5,6,7,8,5,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    int nums1[] = {1 ,2,1,3,5,6,4};

    cout <<"Peak element: " << brute(nums,n) << endl ;
    cout <<"Peak element 1: " << peak1(nums,n) << endl ;
    cout <<"Peak element 2: " << peak2(nums1,7) << endl ;
}