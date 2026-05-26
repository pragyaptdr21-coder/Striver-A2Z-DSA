//Intersection of two sorted arrays

#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main(){
    int a[] ={1,1,2,3,3,4,5,7};
    int b[]= {2,3,3,4,5,6};
    cout << endl;

    int n1 = 8;
    int n2 = sizeof(b)/sizeof(b[0]);
    vector<int> vis(n2,0);
    vector<int> ans ;

    for(int i=0 ;i<n1;i++){
        for(int j=0 ; j<n2 ; j++){
            if(a[i]==b[j] && vis[j]==0){
                ans.push_back(a[i]);
                vis[j] = 1 ;
                break;
            }

            
            if(b[j]>a[i]){
                break;
            }
        }

    }

    cout << endl ;
    for(int i=0 ; i<ans.size();i++){
        cout << ans[i] <<" ";
    }
}    

    
