//linear search

#include <iostream>
#include <vector>
using namespace std;

int main(){
     int n;
    cin >> n ;
    vector<int> nums(n);
    cout << endl;
    for(int i=0 ; i<nums.size() ; i++){
        cin >> nums[i];
    }

    cout << "which no. you want to search" << endl ;
    int t;
    cin >> t ;
    cout << endl ;
    bool found = false ;
    for(int i=0 ; i<n ; i++){
        if(nums[i]==t){
            cout <<  i ;
            found = true ;
            break ;
        }
    }

    if(found== false){
        cout << "Not found" ;
    }
   
}