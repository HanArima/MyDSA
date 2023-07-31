#include<iostream>
using namespace std;

int main(){
    int num = 5;
    int *p = &num;
    // address of operators - &
    cout << "Address of num is " << &num << endl;
    cout << endl;

    double db = 5.6783454;
    double *ptr = &db;
    cout << "Address of the pointer is " << ptr << endl;
    cout << "Address of db is " << &db << endl;
    cout << "The entity in the bd is (accessed using variable name): " << db << endl;
    cout << "The entity in the bd is (accessed using pointer): " << *ptr << endl;
    cout << endl;

    char ch = 'p';
    char *pchar = &ch;
    cout << "Address of the pointer is " << pchar << endl;
    cout << "Address of ch is " << &ch << endl;
    cout << "The entity in the ch is (accessed using variable name): " << ch << endl;
    cout << "The entity in the ch is (accessed using pointer): " << *pchar << endl;
    cout << endl;


    
    cout << "Size of int is: " << sizeof(num) <<endl ;
    cout << "Size of int pointer is: " << sizeof(p) <<endl;
    cout << endl;

    cout << "Size of double is: " << sizeof(db) <<endl ;
    cout << "Size of double pointer is: " << sizeof(ptr) << endl;
    cout << endl;

    cout << "Size of char is: " << sizeof(ch) <<endl ;
    cout << "Size of char pointer is: " << sizeof(pchar) << endl;
    cout << endl;
}