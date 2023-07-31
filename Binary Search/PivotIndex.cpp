#include <iostream>
using namespace std;

int pivotIndex (int nums[], int n)
{
    // int sumleft = 0;         Here, I am declaring the variable globally, hence for esh iteration the sum will carry forward. therefor, I was getting wrong amswer.
    // int sumright = 0;
    int index = -1;

    for (int i = 1; i < n; i++)
    {
        int sumleft = 0;
    int sumright = 0;
        for (int j = 0; j < i; j++)
        {
            sumleft += nums[j];
        }
        for (int k = i + 1; k < n; k++)
        {
            sumright += nums[k];
        }
        
        if (sumright == sumleft)
        {
            index = i;
            break;
        }
    }
    return index;
}

int main()
{
    int arr[6] = {1, 7, 3, 6, 5, 6};

    int ans = pivotIndex(arr, 6);
    cout << ans;
}