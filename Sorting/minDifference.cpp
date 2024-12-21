#include<bits/stdc++.h>
using namespace std;

int minDifferenceArray(int arr[], int n){
    sort(arr, arr+n);
    int diff_min = INT_MAX;
    for(int i=0; i<n; i++){
        diff_min = min(diff_min, arr[i]-arr[i-1]);
    }
    return diff_min;
}

int main(){
    int arr[4] = {10, 8, 1, 4};
    int result = minDifferenceArray(arr, 4);
    cout << result << endl;
}