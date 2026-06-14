// #include<iostream>
// using namespace std;

// void func(){
//     int size;
//     cin>>size;

//     int *ptr =  new int [size]; // new dynamic memory is allocated using new keyword

//     int x =1;
//     for (int i=0 ; i<size; i++ ){
//         ptr[i] = x;
//         cout<<ptr[i]<<" ";
//         x++;
//     }
//     cout<<endl;

//     delete [] ptr; // delete karna is very important in DMA........
// }

// int main(){
//     func();
// }



// memory leak--------------------

#include<iostream>
using namespace std;

int *function(){
    int *ptr = new int;
    *ptr = 100;
    cout<<"ptr points toward = "<<*ptr<<endl;

    return ptr;
}

int main(){
    int *x = function();
    cout<< *x <<endl;
    return 0;
}