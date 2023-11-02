#include <bits/stdc++.h>
using namespace std;

int closestpair(int target, int arr[], int arrl)
{
    pair<int, int> p = {1,1};
    int l = 0, r = 0;
    int diff = INT_MAX;
    l = 0;
    r = arrl - 1;

    while (l < r)
    {
        int sum = arr[l] + arr[r];
        int curr = abs(sum - target);
        if (curr < diff){
            diff = curr;
            p = {arr[l], arr[r]};

        }

        if (sum < target)
        {
            l++;
        }
        else
        {
            r++;
        }

        
    }
    cout << p.first << " " << p.second;
}

int main()
{
    int n = 6, x = 43;
    int arr[] = {10, 25, 28, 39, 40, 49};
    closestpair(43, arr, 6);
    return 0;
}