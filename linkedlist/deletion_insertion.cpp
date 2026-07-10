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

Node* removeHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp ;
    return head;
}

Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL ;
    }

    Node* temp = head ;
    while(temp->next->next != NULL){
        temp = temp-> next;
    }

    free(temp->next);
    temp->next = nullptr ;
     return head;
}

Node* removeKthel(Node* head , int k){
    if(head == NULL){
        return head;
    }
    if(k==1){
        Node* temp = head ;
        head = head->next;
        free(temp);
        return head;
    }

    int cnt = 0 ;
    Node* temp = head ;
    Node* prev = NULL ;
    while(temp != NULL){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next ;
            free(temp);
            break ;
        }

        prev = temp ;
        temp = temp->next ;
    }
    return head ;
}

Node* removeValue(Node* head , int value){
    if(head == NULL){
        return head;
    }
    if(head->data == value){
        Node* temp = head ;
        head = head->next;
        free(temp);
        return head;
    }

    
    Node* temp = head ;
    Node* prev = NULL ;
    while(temp != NULL){
        
        if(temp->data == value){
            prev->next = prev->next->next ;
            free(temp);
            break ;
        }

        prev = temp ;
        temp = temp->next ;
    }
    return head ;
}

Node* insertHead(Node* head , int val){
    Node* temp = new Node(val , head);
    return temp ;
}

Node* insertTail(Node* head , int val){
    if(head == NULL){
        return new Node (val) ;
    }
    Node* temp = head ;
    while(temp->next != NULL){
        temp = temp->next ;
    }

    Node* newNode = new Node(val);
    temp->next = newNode ;
    return head ;

}

Node* insertPosition(Node* head , int el, int k){
        if(head == NULL){
            if(k==1){
                return new Node(el);
            }
            else{
                return head;
            }
        }

        if(k==1){
            return new Node(el , head);
        }

        int cnt = 0 ;
        Node* temp = head ;
        while(temp != NULL){
            cnt++;
            if(cnt == (k-1)){
                Node* x = new Node(el,temp->next);
                temp->next = x ;
                break;
            }
            temp = temp->next;
        }
        return head;
}

Node* insertbeforeValue(Node* head , int el, int val){
        if(head == NULL){
            return NULL ;
        }

        if(head->data == val){
            return new Node(el , head);
        }

        
        Node* temp = head ;
        while(temp->next != NULL){
            if(temp->next->data == val){
                Node* x = new Node(el,temp->next);
                temp->next = x ;
                break;
            }
            temp = temp->next;
        }
        return head;
}

int main(){
    vector<int> arr = {12,5,8,7,2,5,32};
    Node* head = convertArr2LL(arr);
    head = removeHead(head);
    print(head);

    cout << endl;
    head = removeTail(head);
    print(head);

    cout << endl;
    head = removeKthel(head , 3);
    print(head);

    cout << endl;
    head = removeValue(head , 2);
    print(head);

    cout << endl;
    head = insertHead(head , 22);
    print(head);

    cout << endl;
    head = insertTail(head , 87);
    print(head);

    cout << endl;
    head = insertPosition(head ,66 , 3);
    print(head);

    cout << endl;
    head = insertbeforeValue(head , 55 ,5);  //here value is in LL
    print(head);


}