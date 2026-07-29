#include<iostream>
using namespace std;


class Node{
public:
    int data;
    Node* next;
 
   Node(int val){
    data = val;
    next = nullptr;
   }    
   
   // after that this node destructor is called again again-------
//    ~Node(){
//      cout<<"~Node" <<data<<endl;
//     if(next !=nullptr){
    
//         delete next;
//         next = nullptr;
        
//     }
    
//    }
 
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = nullptr;
        tail = nullptr;
    }
    
    // firstly this destructor is called and enter in the list ----------
    // ~List(){
    //     cout<<"list \n ";
    //     if(head !=nullptr){
    //         delete head;
    //         head = nullptr;
    //     }
    // }
    // for adding the node inside the linkedlist in front---------

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
    // for  adding the node inside the linkedlist in back----------
    void push_back(int val){
        Node* newNode = new Node(val);//dynamic

        if(head== nullptr){
            head= tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
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
    
    // insert the node somewhere in the middle of the linkedlist------------
    void insertMiddle( int val , int pos){
        Node* newNode = new Node(val); // dynamic
        Node*temp = head;

        for(int i=0; i<pos-1 ; i++){
            if(temp==nullptr){
                cout<<"position is invalid! ";
            }
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;



    }
    // delete from the front
    void pop_front(){
        if(head == nullptr){
            cout<<" LL is null";
        }
        Node* temp = head;
        head = head->next;

        temp->next= nullptr;
        delete temp;
    }
    // delete from the back 
    void pop_back(){
        Node* temp = head;
        while (temp->next->next !=nullptr){
            temp =  temp->next;
        }

        temp->next = nullptr;
        delete tail;
        tail = temp;

    }


    // search an element and print its index value --------------------

    int searchIdx(int key){
        Node* temp = head;
        int idx = 0;

        while(temp != nullptr){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }


    // serch by using recursion 
    
    int helper(Node* temp , int key ){
        // base case
        if (temp == nullptr){
            return -1;
        }

        if(temp->data == key ){
            return 0;
        }

        int idx = helper(temp->next , key);

        if (idx == -1){
            return -1;
        }
        return idx + 1;
    }

    int searchRec(int key){
        return helper(head , key); // we can'nt access the head in the searchRec directly bcoz, it is private in list 
    }



    // Reverse a linked list

    void ReverseLL(){
        Node* curr = head;
        Node* prev = nullptr;

        while(curr!=nullptr){
            Node* next = curr->next;
            curr->next = prev;

            //updations for each node
                 
            prev = curr;
            curr = next;

        }
        head = prev;
    }



    // remove nth term from the last

    // firstly calculate the size of the ll
    int getSize(){
        int sz = 0;

        Node*temp = head;

        while(temp != nullptr){
            temp = temp->next;
            sz++;
        }
        return sz;
    }

    // removeNth function
    int removeNth(int n){
        int size = getSize();
        Node*prev = head;

        for(int i=1; i<(size-n); i++){
            prev = prev->next;
        }
        Node* toDel = prev->next;
        cout<<"going to delete = "<< toDel->data<<endl;

        prev->next = prev->next->next; // make irrelavent the middle node  like = prev , curr , next , so remove curr and connect prev to next 
    }

};

int main(){

    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ll.printll();

    // ll.insertMiddle(100 , 4);
    // ll.printll();
    
    // ll.pop_front();
    // ll.printll();

    // ll.pop_back();
    // ll.printll();

    // cout<<ll.searchIdx(100)<<endl;
    // cout<<ll.searchRec(100)<<endl;

    // ll.ReverseLL();
    // ll.printll();
    
    ll.removeNth(4);
    ll.printll();

    return 0;
}