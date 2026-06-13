#include <bits/stdc++.h>
using namespace std;

void brute(int nums1[] , int nums2[] , int n ,int m){
    long long arr3[n+m];
    int left = 0 ;
    int right = 0 ;
    int index = 0 ;
    while(left < n && right < m){
        if(nums1[left] <= nums2[right]){
            arr3[index] = nums1[left];
            left++ , index++;
        }
        else{
            arr3[index] = nums2[right];
            right++ , index++ ;
        }
    }

    while(left < n){
        arr3[index++] = nums2[left++];
    }

     while(right < m){
        arr3[index++] = nums2[right++];
    }

    for(int i=0 ; i<n+m ; i++){
        if(i<n){
            nums1[i] = arr3[i];
        }
        else{
            nums2[i-n] = arr3[i];
        }
    }

      cout << "brute approach \n" ;

    for (int i = 0 ; i< n ; i++){
        cout << nums1[i];
    }

    cout << endl ;

     for (int i = 0 ; i< m ; i++){
        cout << nums2[i];
    }
}

void optimal_sol1(int nums1[] , int nums2[] , int n ,int m){
    int left = n-1;
    int right = 0 ;
    while(left>=0 && right < m){
        if(nums1[left] > nums2[right]){
            swap(nums1[left] ,nums2[right]);
            left-- , right++ ;
        }
        else{
            break;
        }
    }

    sort(nums1 , nums1+n);
    sort(nums2 , nums2+m);

    cout << "swap approach \n" ;

    for (int i = 0 ; i< n ; i++){
        cout << nums1[i];
    }

    cout << endl ;

     for (int i = 0 ; i< m ; i++){
        cout << nums2[i];
    }
}

void swapIfGreater(int nums1[] , int nums2[] , int ind1 , int ind2){
    if(nums1[ind1] > nums2[ind2]){
        swap(nums1[ind1] , nums2[ind2]);
    }
}
void optimal_sol2(int nums1[] , int nums2[] , int n ,int m){
    int len = (n+m);
    int gap = (len/2) +(len%2) ;
    while(gap > 0){
        int left = 0 ;
        int right = left + gap ;
        while(right < len){
            //arr1 and arr2
            if(left<n && right >=n){
                swapIfGreater(nums1 , nums2 , left , right - n);
            }
            //arr2 and arr2
            else if(left >= n){
                swapIfGreater(nums1 ,nums2 , left-n , right-n);
            }
            //arr1 and arr1
            else{
                swapIfGreater(nums1 , nums2 , left , right);
            }

            left++ , right++ ;
        }
        if(gap == 1){
            break ;
        }
        gap = (gap/2) + (gap % 2);
    }

     cout << "gap method \n" ;

    for (int i = 0 ; i< n ; i++){
        cout << nums1[i];
    }

    cout << endl ;

     for (int i = 0 ; i< m ; i++){
        cout << nums2[i];
    }
}



int main(){
    int nums1[]= {1 ,3,5,7};
    int nums2[]= {0,2,6,8,9};
    int n = 4 ;
    int m = 5 ;

    brute(nums1 , nums2 , n ,m);
    cout << endl ;
    optimal_sol1(nums1 , nums2 , n , m);
    cout << endl ;
    optimal_sol2(nums1 , nums2 , n ,m) ;

    return 0 ;
}