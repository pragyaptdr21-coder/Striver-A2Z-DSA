#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    // pre compute
    int hash[26] = {0};   //hash[26] --> assuming just lower case letters
                          //hash[256]--> if it doesn't states about the exclusivity of the char.
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a']++;   //if hash[s[i]]--> autocast to ascii value
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;

        //fetch
        cout << hash[c-'a'] << endl;  //in order to index
    }
    return 0 ;
}

//character hashing with map
//map<char,value> mpp ;
//mpp[s[i]]++;   //this will not be converted into integer

//ASCII value