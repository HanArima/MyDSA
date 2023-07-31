#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    int temp = key;
    for (int i = 0; i < size; i++)
    {
        if (temp == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{

    int arr[] = {1, 2, 3, 5, 7, 8, 4, 6, 10};
    int key;

    cout << "Enter the Key to be Searched" << endl;
    cin >> key;

    bool found = search(arr, 9, key);
    if (found)
    {
        cout << "Key is Found";
    }
    else
    {
        cout << "Key not found";
    }
}