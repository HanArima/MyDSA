#include<bits/stdc++.h>
using namespace std;

int maxSubarryZeroAndone(int arr[], int n){
    unordered_map<int, int> hash;
    int sum = 0;
    int res = 0;
    int prefix_sum = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if(prefix_sum == sum) res = i+1; //Boundary Case
        if(hash.find(prefix_sum)==hash.end()) hash.insert({prefix_sum, i}); // Inserting the prefix sum new int the hash map
        if(hash.find(prefix_sum-sum) != hash.end()) res = max(res, hash[prefix_sum-sum]); //Updating the result
    }
    return res;
}
int main(){
    int arr[7] = {1,0,1,1,1,0,0};
    for(int i = 0; i<7; i++){
        if(arr[i]==0) arr[i] = -1;
    }
    
      for(int i = 0; i<7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int res = maxSubarryZeroAndone(arr,7);
    cout << res;

}