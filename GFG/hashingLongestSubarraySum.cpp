#include<bits/stdc++.h>
using namespace std;

int maxSubarray(int arr[], int n, int sum){
    unordered_map<int, int> hash;
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

}