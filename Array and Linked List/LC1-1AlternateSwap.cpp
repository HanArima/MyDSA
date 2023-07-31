// Swap Alternate

#include <iostream>
using namespace std;

// 53 Line of Code ;_;
void printArray(int arr[], int size)
{
    cout << "Printing the Array... " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array Printed... " << endl;
    cout << endl;
}

void swapAlternate(int arr[], int size)
{
        int firstkey;
        int secondkey;

        for (int i = 0; i+1 < size; i += 2)
        {
            firstkey = arr[i];
            secondkey = arr[i + 1];
            arr[i] = secondkey;
            arr[i + 1] = firstkey;
        }

        cout << "THE SWAPPED ARRAY IS: " << endl;
        printArray(arr, size);
}

int main()
{
    cout << "Enter the size of the array: " << endl;
    int size;
    cin >> size;

    int array1[100];
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }
    cout << endl;

    cout << "THE ACTUAL ARRAY IS: " << endl;
    printArray(array1, size);
    swapAlternate(array1, size);
}

/*
// 41 line of code :D
void printArray(int arr[], int size)
{
    cout << "Printing the Array... " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array Printed... " << endl;
    cout << endl;
}

int main(){
    cout << "Enter the size of the array: " << endl;
    int size;
    cin >> size;

    int array1[100];
    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }
    cout << endl;

    cout << "THE ACTUAL ARRAY IS: " << endl;
    printArray(array1, size);

    for(int i=0; i+1<size; i+=2){
        swap(array1[i], array1[i+1]);
    }
    
    cout << "THE SWAPPED ARRAY IS: " << endl;
    printArray(array1, size);

}

*/


