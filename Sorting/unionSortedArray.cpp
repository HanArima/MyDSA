#include <bits/stdc++.h>
using namespace std;

void intersectionTwoSorted(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 || j < n2)
    {
        if (i > 0 && arr1[i - 1] == arr1[i])
        {
            i++;
            continue;
        }
        if (j > 0 && arr2[j - 1] == arr2[j])
        {
            j++;
            continue;
        }
        if (arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
    }
    
}

int main()
{
    int arr1[3] = {3, 5, 8};
    int arr2[5] = {2,8,9,10,15};

    intersectionTwoSorted(arr1, arr2, 3, 5);
}