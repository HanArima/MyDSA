#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
    int ans = 0;

    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){

    int array1[] = {1,2,3,4,1,2,3};
    int temp = findUnique(array1, 7);
    cout << temp;
     
}

// DO IT ONCE YOU LEARN HASH MAP
// https://leetcode.com/problems/unique-number-of-occurrences/solutions/2861548/easiest-solution-c-easy-to-understand-just-simple-approach/