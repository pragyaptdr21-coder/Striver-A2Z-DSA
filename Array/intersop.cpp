//Intersection of two sorted arrays

#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main(){
    int a[] ={1,1,2,3,3,4,5,7};
    int b[]= {2,3,4,4,5,6};
    cout << endl;

    int n1 = 8;
    int n2 = sizeof(b)/sizeof(b[0]);
    vector<int> ans ;

    int i=0;
    int j=0 ;

    while(i<n1 && j<n2){
        if(b[j]>a[i]){
            i++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }

    }

    cout << endl ;
    for(int i=0 ; i<ans.size();i++){
        cout << ans[i] <<" ";
    }
}    

    
