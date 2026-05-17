//NUMBER HASHING with map

/*
storing    }  takes logN
fetching   }  N is the no. of elements in the map
*/

#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; 
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    map<int ,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;  //q-queries , no. of times you want to ask no.
    cin >>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number]<<endl;
    }

    return 0 ;
}
