#include <iostream>
using namespace std;

int firstOccurence(int nums[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int temp = 0;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (nums[mid] == target)
        {
            temp = mid;
            end = mid - 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return temp;
}

int lastOccurence(int nums[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int temp = 0;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (nums[mid] == target)
        {
            temp = mid;
            start = mid + 1;
        }
        else if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    temp;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 3, 3, 3, 4, 4, 5};

    int firstindex = firstOccurence(arr, 10, 3);
    cout << "The First index of target is" << firstindex << endl;

    int lastindex = lastOccurence(arr, 10, 3);
    cout << "The Last index of target is" << lastindex << endl;
}