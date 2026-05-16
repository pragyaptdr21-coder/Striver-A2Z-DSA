//Reverse an array

#include <iostream>
using namespace std;


//recursion using two pointers
void f2(int a[] ,int l , int r){
    if (l>=r){
        return ;
    }
    else {
        swap(a[l] , a[r]);
        f2(a ,l+1,r-1);
    }
} 

//recursion using one pointer
void f1(int a[],int i,int n){
    if(i>=n/2){
        return;
    }
    else{
        swap(a[i],a[n-i-1]);
        f1(a,i+1,n);
    }
}

int main(){
    int n ;
    cin >> n ;
    cout << endl ;
    int a[n];
    // take input
    for (int i=0 ; i<n ; i++){
        cin >> a[i];
    }
     
    //two pointer
    f2(a , 0,n-1);

    // print reveres array
    for (int j=0 ; j<n ; j++){
        cout << a[j] << " ";
    }

    cout << endl ;

    //here now the array reverses so using one pointer we get original array as it reverses that reverse array we get from two pointer.
    //one pointer
    f1(a , 0 , n);

    for (int k=0 ; k<n ; k++){
        cout << a[k] << " ";
    }

    return 0 ;
}