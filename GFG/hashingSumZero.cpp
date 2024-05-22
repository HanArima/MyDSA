#include <bits/stdc++.h>
using namespace std;

bool isZeroSubarray(int arr[], int n){
    unordered_set<int> hash;
    int prefix_sum = 0;
    for(int i=0; i<n; i++){
        prefix_sum += arr[i];
        if(hash.find(prefix_sum) != hash.end()) return true;
        if(prefix_sum == 0) return true;
        hash.insert(prefix_sum);
    }
    return false;
}

int main(){
    int arr[5] = {3,4,-3,-4,1};
    bool answer = isZeroSubarray(arr, 5);
    cout << "In the given array, a subarray with zero sum is " ;
    if(answer == true) cout << "present.";
    else cout << "NOT present.";
}