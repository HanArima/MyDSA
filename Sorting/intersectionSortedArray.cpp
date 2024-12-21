#include <bits/stdc++.h>
using namespace std;

void intersectionTwoSorted(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (i > 0 && arr1[i - 1] == arr1[i])
        {
            i++;
            continue;
        }
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
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
    int arr1[8] = {3, 5, 10, 10, 10, 15, 15, 20};
    int arr2[5] = {5, 10, 10, 15, 30};

    intersectionTwoSorted(arr1, arr2, 8, 5);
}