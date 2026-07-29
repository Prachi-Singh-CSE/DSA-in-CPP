#include<iostream>
#include<list>
using namespace std;

// function for print list

void printLL(list<int>ll){
    list<int> :: iterator itr;
    for(itr= ll.begin(); itr!=ll.end(); itr++){
        cout<<(*itr)<<" -->";
    }
    cout<<"NULL"<<endl;
}

int main(){

    list<int> ll;

    ll.push_front(2);
    ll.push_front(1);//1->2

    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);//1->2->3->4->5


    printLL(ll);

    cout<<"size of linked list: "<<ll.size()<<endl;
    cout<<"head = "<< ll.front()<<endl;
    cout<<"tail = "<< ll.back()<<endl;

    ll.pop_back();
    printLL(ll);

    return 0;
}