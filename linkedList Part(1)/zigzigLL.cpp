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

// reverse function 
Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = nullptr;
        Node* next = nullptr;

        while(curr!=nullptr){
           next = curr->next;
            curr->next = prev;

            //updations for each node
                 
            prev = curr;
            curr = next;

        }
        return prev;
    }

// zigzag function 

Node* zigzagLL(Node* head){

    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* rightHead = splitAtMiddle(head);
    Node* rightHeadReverse = reverse(rightHead);

    //alternate merging  1st head = head , 2nd head = rightHeadReverse

    Node* left = head;
    Node* right = rightHeadReverse;
    Node* tail = right;

    while (left != nullptr && right != nullptr){

        // save address for the next nodes 
        Node* nextLeft = left->next; 
        Node* nextRight = right->next;
 
        // link nodes
        left->next = right;
        right->next = nextLeft;
        tail = right;

        // update values 
        left = nextLeft;
        right = nextRight;
    }

        if(right != nullptr){
            tail->next = right;
        }
        
    return head;
}




int main(){

    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printll(ll.head);
    
    ll.head = zigzagLL(ll.head);
    ll. printll(ll.head);
    
    
  
    return 0;
}
