#include <iostream>
using namespace std;

int peakIndex(int arr[], int size)
{
int s=0;
        int e=arr.size()-1;
        int mid= s+(e-s)/2;
        while(s<e)
        {
           if(arr[mid-1]<arr[mid]){
               s = mid;
           }
           else{
               e = mid-1;
           }
         mid= s+(e-s)/2;
        }
        return s;
}
int main()
{
    int arr[12] = {5,6,7,8,9,8,7,6,5,4,3,2};
    int answer = peakIndex(arr, 12);

    cout << "The peak index is " << answer;

    return 0;
}
