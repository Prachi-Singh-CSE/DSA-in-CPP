// output of the following codes

// #include<iostream>
// using namespace std;

// int main(){
//     int x;
//     int *ptr;
//     x = 7;
//     ptr = &x;
//     cout<< *ptr<<endl; // 7
//     return 0;
// }
// --------------------------------------------------------
// #include<iostream>
// using namespace std;

// void multipleBy2(int &a, int &b, int &c){
//     a *= 2;
//     b *= 2;
//     c *= 2;
//     cout<< a << b << c << "  " << "\n"; // 2 4 6
// }

// int main(){
//     int x =1, y = 2,z = 3;
//     multipleBy2(x , y, z);
//     cout<< x << y << z << "  " <<"\n"; // 2 4 6
//     return 0;
// }

//------------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;
    
    cho += a;
    *ptr += ch;

    cout << a << ", "<< ch << endl;
    return 0;
}