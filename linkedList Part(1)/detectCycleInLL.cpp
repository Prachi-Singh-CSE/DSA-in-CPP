// detect cycle in a linked list --------------------

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
    }


     // print the value of the linkedlist---------
    void printll(){
        Node* temp = head;

        while(temp != nullptr){
            cout<<temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"null"<<endl;
    }

    //function for identification of cycle 
    bool isCycle(Node* head){
        Node* slow = head;
        Node* fast = head;

        while(fast!= nullptr && fast->next!=nullptr){
            // make updation
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                cout<<"cycle exist\n";
                return true;
            }

        }
        cout<<"cycle doesn't exist\n";
        return false ;
    }
    
};



int main(){

    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    // for making a cylcle ----
    // ll.tail->next = ll.head;
    
    
    ll.isCycle(ll.head);
  
    return 0;
}

