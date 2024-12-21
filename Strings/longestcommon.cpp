#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

string longest_common_prefix(vector<string> arr){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    
    //Compare the first and the last string
    string first = arr[0];
    string last = arr[n-1];
    string result;

    int i=0, j=0;
    while(first[i] == last[j]){
        result += first[i];
        i++;
        j++;
    }

    return result;
}

int main(){
    cout << "Enter the no of words you are posting" << endl;
    int n;
    cin >> n;

    vector<string> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    string result = longest_common_prefix(arr);
    cout << result << endl;
}