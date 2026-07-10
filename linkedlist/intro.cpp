#include <iostream>
#include <vector>
using namespace std;

//self defined object
class Node  //struct Node
{
public:
    int data ;
    Node* next;
public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
public:
    Node(int data1){
        data = data1;
        next = nullptr ;
    }

};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i =1 ;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;  //never ever temper the head
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout << head->data <<" ";
        head = head->next;
    }
    cout << endl;
}

int lengthOfLL(Node* head){
    int cnt = 0 ;
    Node* temp = head ;
    while(temp){
        temp->data ;
        temp = temp->next;
        cnt++;
    }
    return cnt ;
}

int checkIfPresent(Node* head , int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next; 
    }
    return 0 ;
}

int main(){
    vector<int> arr = {12,5,8,7};
    vector<int> arr1 = {6,9,8,7};


    Node* y = new Node(arr[0] , nullptr);
    cout << y <<endl;  //gives pointer to the memory location
    cout << y->data <<endl ;


    Node x = Node(arr1[1] , nullptr); //just creating obj
    cout << x.data << endl;
    cout << x.next <<endl ;


    Node* head = convertArr2LL(arr);


    cout << head->data <<endl;
    Node* temp = head ;


    //traversal in ll     O(n)
    while(temp){
        cout<<temp->data <<" ";
        temp = temp->next ;
    }

    cout << endl; 


    //print
    print(head);


    cout << endl;
    //length of LL   O(n)
    cout <<"length of LL:" << lengthOfLL(head) <<endl;
    

    //search an element in LL  O(n)
    cout << checkIfPresent(head , 16);
}
