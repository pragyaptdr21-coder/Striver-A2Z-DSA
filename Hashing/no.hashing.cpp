//HASHING --> prestoring /fetching

//depending on what the maximum size of array, you declare the hash.

//counting frequencies of Array elements

//NUMBER HASHING
#include <iostream>
using namespace std;

int main(){
    int n;  //n = 12 [max.]
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13] = {0};    // if n = 12  hash[13]
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;  //q-queries , no. of times you want to ask no.
    cin >>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hash[number]<<endl;
    }

    return 0 ;
}
