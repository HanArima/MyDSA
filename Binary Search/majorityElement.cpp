// Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears strictly more than N/2 times in the array.
#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int size)
    {
        sort(arr, arr+size);
        for(int i = 0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl; 

        int mid = size/2; 
        
        int target = arr[mid];
        
        int upper = upper_bound(arr, arr+size, target) - arr - 1;
        int lower = lower_bound(arr, arr+size, target) - arr;
        
        if(upper - lower == mid){
            return arr[mid];
        }
        return -1;
    }  

int main(){
    int arr[5] = {3,1,2,3,3};
    int ans = majorityElement(arr, 5);
    cout << ans;
}