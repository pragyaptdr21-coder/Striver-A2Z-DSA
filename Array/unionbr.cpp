//brute force approach -- using set data structure

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

    set<int> st ;
    for(int i =0 ; i<n ; i++){
        st.insert(arr1[i]);
    }

    for(int i =0 ; i<m ; i++){
        st.insert(arr2[i]);
    }

    vector<int> temp ;
    for(auto it : st){
        temp.push_back(it);
    }

    for(int i=0 ; i<temp.size() ; i++){
        cout << temp[i];
    }

}   