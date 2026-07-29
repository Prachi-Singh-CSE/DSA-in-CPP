//Swapping Nodes in a Linked List

//Sample Input 1: 1->2->3->4,  x = 2, y = 4
//Sample Output 1: 1->4->3->2


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


 //Swapping Nodes in a Linked List

Node* swapNodes(Node* head , int x , int y ){
    
    if (x == y || head == nullptr) return head;

    Node* prev = head ;
    Node* temp = head ;


    while(prev != nullptr && prev->data != x){
        prev = prev->next;
    }

    while( temp != nullptr && temp->data != y){
        temp = temp->next;
    }
 

    //Safety check: Ensure BOTH values were actually found in the list
    if(prev !=nullptr && temp !=nullptr){
        swap(prev->data , temp->data);
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
    
    ll.head = swapNodes( ll.head , 3 ,6);
    ll. printll(ll.head);
    
    
  
    return 0;
}
