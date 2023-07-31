#include<iostream>
using namespace std;

int main(){
    double arr[10] = {10.2, 2.5, 3.8, 14.5, 25.88, 16.65, 37.15, 18.01, 9.2, 10.5};
    cout << "Address of first memory block: "<< arr <<endl;
    cout << "Address of first memory block: "<< &arr[0] <<endl;
    cout << *arr << endl;
    // When I didn't initialize the array it produced a garbage value, since there was nothing present at arr[0]
    cout << *arr + 1 <<endl; //2
    cout << *(arr + 1) <<endl; //6
    cout << arr + 2 << endl;
    cout << *(arr + 2) << endl;

    //printing the array using the name of the array as pointer

    for(int i = 0; i < 10; i++){
        //cout << *(arr + i) << " "; OR
        cout << i[arr] << " "; //Notice that variable is out and array name is in.
    }

    cout << endl << endl << "What will happen if I intialize a pointer by array name and not the address?" <<endl;
    double *aptr = arr;
    cout << *aptr << endl;
    cout << "Address of first memory block: "<< aptr <<endl;

    //Difference between Array and Pointer
    cout << "Size of aptr " << sizeof(aptr) <<endl;
    cout << "Size of arr " << sizeof(arr) << endl;
    cout << "Size of *aptr( it is the size of value present at whatever it points at) " << sizeof(*aptr) <<endl;
    cout << "Size of &aptr " << sizeof(&aptr) <<endl;   
}