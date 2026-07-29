// removing cycle from a linked list --------------------

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

    //function for removing cycle 
    void removeCycle(Node* head){
        Node* slow = head;
        Node* fast = head;
        bool isCycle = false;

        while(fast!= nullptr && fast->next!=nullptr){
            // make updation
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast){
                cout<<"cycle exist\n";
                isCycle = true;
                break;
            }

        }
        if(!isCycle){ // check that iscycle abhi bhi false hai ?    
        cout<<"cycle doesn't exist\n";
        return;
        }

        slow = head;
        if (slow == fast){
            while(fast->next != slow){
                fast = fast->next;
            }
            fast->next = nullptr;
        }
        else{
            Node* prev = fast; // to track prv node 
            while(slow !=fast){
                slow = slow->next;
                prev = fast; //  last time update hone se pahle waali node 
                fast = fast->next;
            }
            prev->next = nullptr; // remove cycle 
        }
    
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
    ll.tail->next = ll.head;
    
    
   ll.removeCycle(ll.head);
   ll.printll();
   
}
