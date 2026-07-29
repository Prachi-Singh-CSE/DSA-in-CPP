#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = next = nullptr;
    }
};

class DoublyList{
    public:
    Node* head;
    Node* tail;

    DoublyList(){
        head = tail = nullptr;
    }

    void push_front(int val){
        Node* newNode = new Node(val);

        if(head == nullptr){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    };

    void pop_front(){

        Node* temp = head;
        head = head->next;

        if(head != nullptr){
            head->prev = nullptr;
        }
        temp->next = nullptr;
        delete temp;
    }


    void printLL(){
        Node*temp = head;

        while(temp != nullptr){
            cout<<temp->data<<" <=> ";
            temp = temp->next;
        }
        cout<<"null"<<endl;
    
    }

};

int main(){
    DoublyList dbll;

    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);

    dbll.printLL(); //1 <=> 2 <=> 3 <=> 4 <=> 5 <=> null

    dbll.pop_front();

    dbll.printLL();

    return 0;
}