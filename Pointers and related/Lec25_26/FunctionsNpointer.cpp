#include<iostream>
using namespace std;

int update(int arr[], int size, int *ptr){

    ptr = ptr + 3;
    *ptr = 5;
}

void arrayKhichri(int arr[], int n){
    cout << "Size of Array: " << sizeof(arr) << endl;
}

int main(){
    
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    
    cout <<"Before, arr[3]: " << arr[3] << endl;
    update(arr, 5, p);
    cout <<"After, arr[3]: " << arr[3] << endl;

    arrayKhichri(arr, 5);
    // In the memory, there is not array block of size 29 (if elements in int array is 5).
    //But in reality a pointer of name arr is stored with the index of the first element
}