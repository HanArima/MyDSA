#include<iostream>
using namespace std;

void printintArray(int arr[], int size){

    cout << "Printing the array..."<< endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing done..."<<endl;

}

int getMax(int arr[], int size){
    int temp= arr[0];
    for (int i = 0; i < size; i++)
    {
        temp = max (temp, arr[i]);
        // if (arr[i] > temp)
        // {
        //     temp = arr[i];
        // }       
    }
    cout << "The maximun number is " << temp << endl;

}

int getMin(int arr[], int size){
    int temp= arr[0];
    for (int i = 0; i < size; i++)
    {
        temp = min (temp, arr[i]);
        // if (arr[i] < temp)
        // {
        //     temp = arr[i];
        // }       
    }
    cout << "The minimum number is " << temp << endl;

}

int main(){
    int size;
    cout << "Enter the Size of Array:  " << endl;
    
    cin >> size;
    // Taking size of array as variable is a bad practice. Take a big size of array but never a variable size array.
    int arr[100];
    cout << "Enter the Elements: " << endl;
    for(int i=0; i < size; i++){
        cin >> arr[i];
    }
    printintArray(arr, size);
    getMax(arr, size);
    getMin(arr, size);

}