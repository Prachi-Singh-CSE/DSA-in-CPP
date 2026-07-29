// odd even linked list

//Sample Input 1: 8->12->10->5->4->1->6->NULL 
//Sample Output 1: 8->12->10->4->6->5->1->NUL

#include <iostream>
using namespace std;



class Node{
public:
    int data;
    Node* next;
 
   Node(int val){
    data = val;
    next = nullptr;
   }  
   
};


class List{
  
public:

    Node* head;
    Node* tail;

    List(){
        head = nullptr;
        tail = nullptr;
    }


    void push_front(int val){
        Node* newNode = new Node(val); // dynamic

        if(head == nullptr){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    };

    void push_back(int val){
        Node* newNode = new Node(val);//dynamic

        if(head== nullptr){
            head= tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    };



     // print the value of the linkedlist---------
    void printll(Node* head){
        Node* temp = head;

        while(temp != nullptr){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"null"<<endl;
    }
    
};


 // odd even linked list function --- try with merge sort

// split at middle function 

Node* splitAtMiddle(Node* head){

    Node* slow = head;
    Node* fast = head;
    Node* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr){

        prev = slow ;
        slow = slow ->next;
        fast = fast->next->next;
    }
    if(prev!= nullptr){
        prev->next = nullptr;
    }
   
    return  slow;
};

// merge function

Node* merge(Node* left , Node* right){
    List ans;

    Node* i = left;
    Node* j = right;

    while(i != nullptr && j != nullptr){

        if(i->data % 2 == 0 && j->data % 2 == 0){
            ans.push_back(i->data);
            ans.push_back(j->data);
            i = i->next;
            j = j->next;

        } else {
            ans.push_back(i->data);
            i = i->next;
            ans.push_back(j->data);
            j = j->next;
        }
        
    }

    return  ans.head;
}

// merge sort function 

Node* mergeSort(Node* head){

    // base  case 

    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node* rightHead = splitAtMiddle(head);

    Node* left = mergeSort(head);
    Node* right = mergeSort(rightHead);

    return merge(left, right);
}


int main(){

    List ll;

    ll.push_front(10);
    ll.push_front(9);
    ll.push_front(8);
    ll.push_front(7);
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printll(ll.head);
    
    ll.head = mergeSort(ll.head);
    ll. printll(ll.head);
    
    
  
    return 0;
}
