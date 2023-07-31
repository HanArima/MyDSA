#include <iostream>
#include <vector>
using namespace std;

int pivotElement(vector<int>& nums){
        int s=0;
        int e=nums.size()-1;

        int mid = s + (e-s)/2;

        while(s < e){
            if(nums[mid]>=nums[0]){
                s = mid + 1;
            }
            else{
                e = mid;
            }
        }
        return s;
    }

int main(){
        vector<int> nums = {6,9,1,2,3};
        int pivot = pivotElement(nums);
        cout << "The Pivot Element is: " << endl;
}