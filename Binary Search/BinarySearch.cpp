#include <iostream>
using namespace std;

// Iterative Binary Search

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2;
    // to avoid overflowing (int range)
    int mid = start + (end-start)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 7, 8, 10};
    int odd[5] = {1, 3, 4, 6, 7};

    int key;
    cout << "Enter the key to be found" <<endl;
    cin>>key;

    int index = binarySearch(odd, 5, key);
    
    cout <<  "Index of " << key << " is " << index;

}