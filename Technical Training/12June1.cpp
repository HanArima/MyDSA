//LEETCODE PROBLEM 2206

/*
Approach: We will start with a hash map and iterate and check if the element of that key is alreqady there
-> if yes, then we just increment the value
-> if no then insert. 
*/
/*
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        //Step 1: SORT
        sort(nums.begin(), nums.end());
        unordered_set<int> hash;
        hash.insert(nums[0]);
        int moves = 0;
        for(int i=1; i<nums.size(); i++){
            //Check for distinction with previous element
            if(nums[i-1] == nums[i]){
                nums[i]++;
                moves++;
            }
            while(hash.find(nums[i]) != hash.end()){
                nums[i]++;
                moves++;
            }

            hash.insert(nums[i]);
        }
        return moves;
    }
};
*/
/*
Two problems in this code
    1. Use of hash map calls for unnecessary extra space
    2. While loop in the worst case runs fpr O(n^2). So if the elements are more, TLE error will be faced.
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int moves = 0, available = -1;
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] >= nums[i]){
                available = max(available, nums[i-1]) + 1;
                moves += available - nums[i];
                nums[i] = available;
            }
        }
        return moves;
    }
};

