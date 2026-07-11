#include <iostream>
#include <vector>

using namespace std ;

class Node{
    public:
        int data ;
        Node* next ;
        Node* back ;

    public:
       Node(int data1 , Node* next1, Node* back1){
        data = data1 ;
        next = next1 ;
        back = back1 ;
       }

    public:
       Node(int data1){
        data = data1 ;
        next = nullptr ;
        back = nullptr;
       }   
};

Node* convertarr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head ;
    for(int i = 1 ; i<arr.size() ; i++){
        Node* temp = new Node(arr[i],nullptr , prev);
        prev->next = temp ;
        prev = temp ;
    }
    return head ;
}

Node* deleteHead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL ;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev ;

    return head;
}

Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL ;
    }
    Node* tail = head ;
    while(tail->next != NULL){
        tail = tail->next ;
    }
    
    Node* prev = tail->back ;
    tail->back = nullptr;
    free(tail) ;
    prev->next = nullptr ;
    return head;
}

Node* deleteKthel(Node* head , int k){
    Node* temp = head ;
    int cnt = 0 ;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp-> next ;
    }

    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev==NULL && front==NULL){
        delete temp;
        return NULL ;
    }
    else if (prev == NULL){
        deleteHead(head);
        return head;
    }
    else if(front == NULL){
        deleteTail(head);
        return head ;
    }
    else{
        prev->next = front ;
        front->back = prev ;
        temp->next = nullptr;
        temp->back = nullptr ;
        delete temp ;
        return head ;
    }
    return head ;

}

void print(Node* head){
    while(head != NULL){
    cout << head->data << " ";
    head = head->next;
    }
}

void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next ;
    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp ;
        return;
    }
    prev->next = front ;
    front->back = prev ;
    temp->back = nullptr ;
    temp->next = nullptr;
    free(temp);
}

Node* insertB4Head(Node* head , int val){
    Node* newHead = new Node(val , head , nullptr);
    head->back = newHead ;
    return newHead ;
}

Node* insertB4Tail(Node* head , int val){
    Node* tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newval = new Node(val , tail ,prev);
    tail->back = newval ;
    prev->next = newval;
    return head;
}

Node* insertB4Kth(Node* head , int k , int val){
    Node* temp = head ;
    int cnt = 0 ;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp-> next ;
    }

    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev==NULL && front==NULL){
        Node* newNode = new Node(val , nullptr , nullptr);
        return head ;
    }
    else if (prev == NULL){
        insertB4Head(head,val);
        return head;
    }
    else if(front == NULL){
        insertB4Tail(head,val);
        return head ;
    }
    else{
        Node* newNodek = new Node(val , temp , prev);
        prev->next = newNodek;
        temp->back = newNodek;
        return head;
    }
    return head ;
}

void insertB4Node( Node* node , int val){
    Node* prev = node->back ;
    Node* newNode = new Node(val ,node , prev);
    prev->next = newNode;
    node->back = newNode;
}

int main(){
    vector<int> arr = {12,4,5,6,8,9,2};
    Node* head = convertarr2DLL(arr);
    print(head);

    cout << endl;
    head = deleteHead(head);
    print(head);

    cout << endl;
    head = deleteTail(head);
    print(head);

    cout << endl;
    head = deleteKthel(head,2);
    print(head);

    cout << endl;
    deleteNode(head->next->next);
    print(head);

    cout << endl;
    head = insertB4Head(head,22);
    print(head);

    cout << endl;
    head = insertB4Tail(head,45);
    print(head);

    cout << endl;
    head = insertB4Kth(head,3,55);
    print(head);

    cout << endl;
    insertB4Node(head->next,70);
    print(head);

    return 0 ;
}