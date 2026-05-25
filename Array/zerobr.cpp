//Move all zeroes to the end of the array

//brute solution
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    cout << endl ;

    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin >> arr[i];
    }

    cout << endl;
    vector<int> temp ;
    // step 1 , store non zero no. in temp 
    for(int i=0 ; i<n ; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    //step 2 , put non zero value in array in front
    for(int i=0 ; i<temp.size(); i++){
        arr[i]=temp[i];
    }

    int t = temp.size();

    //step 3 , put zero at remaining places at last
    for(int i=t;i<n ; i++){
        arr[i]=0 ;
    }

    //step 4 ,output
    for(int i = 0 ; i<n ; i++){
        cout << arr[i];
    }

}