#include<iostream>
using namespace std;

int main(){
    
    int arr[20];
    //arr = arr + 1;
    //Whereas, 

    int *ptr = arr;
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    
    int arr1[4] = {1,3,6,7};
    cout << &arr1[0] << endl;
    cout << arr1 << endl;
    cout << &arr1 <<endl;

    cout << "------------------------"<<endl;

    int *p = &arr[0];
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl; 
}