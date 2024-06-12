#include <bits/stdc++.h>
using namespace std;

int minCommonElement(int arr1[], int arr2[])
{
    int *p1 = arr1;
    int *p2 = arr2;
    int res = -1;
    if (*p1 = *p2)
    {
        res = *p1;
    }
    if (*p1 < *p2)
    {
        p1++;
    }
    p2++;
    return res;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[4] = {4, 5, 6, 7};
    int res = minCommonElement(arr1, arr2);
    cout << res;
}