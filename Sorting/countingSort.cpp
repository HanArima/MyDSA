#include<bits/stdc++.h>
using namespace std;

string countSort(string arr){
        // Form a number based array of the letters
        int n = arr.size();
        vector<int> num_arr;
        for(int i=0; i<n; i++){
            num_arr.push_back(arr[i] - 'a');
        }
        int k = 26;
        int count[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        for(int num: num_arr){
            count[num]++;
        }
       
        for (int i = 1; i < k; i++) {
            count[i] += count[i - 1];
        }
        
        char output[n];
        for(int i = n-1; i>=0 ; i--){
            output[count[num_arr[i]] - 1] = char(num_arr[i] + 'a');
            count[num_arr[i]]--;
        }

        arr.clear();
        for(int i=0; i<n; i++){
            arr += output[i];
        }
        
        return arr;
        
    }

int main(){
    string arr = {"ebsab"};
    string result = countSort(arr);

    cout << result << endl;
    
}