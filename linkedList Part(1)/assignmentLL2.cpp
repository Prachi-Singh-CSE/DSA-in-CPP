//delete n nodes after m nodes 

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

//delete the n nodes after m nodes 

Node* deleteNodes(Node* head , int m ,int n){

    if(head == nullptr && head->next== nullptr){
        return head;
    }

    Node* prev = head;
    

    while (prev != nullptr){

     for (int i=1 ; i< m && prev != nullptr ; i++){ // initialise from 1 bcoz it already at head
        prev= prev->next;

     }

     if(prev == nullptr){
        break;
     }

     Node* temp = prev->next; // position where prev comes finally 

     for (int j=0; j<n && temp != nullptr  ; j++){
        temp = temp->next;
     }

    prev->next = temp;
    }

    return head;
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
    
    ll.head = deleteNodes( ll.head , 2, 1);
    ll. printll(ll.head);
    
    
  
    return 0;
}
