// Problem: The ELEMENT AT END INDEX IS NOT GETTING FOUND.

#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s <= e ){
        if (target > arr[mid]){
            s = mid + 1;
        }else if( target < arr[mid]){
            e = mid - 1;
        }else{
            return mid;
        }

        mid = s + e-s/2;
    }

    return -1;

}

int main(){
    int even[] = {2,3,4,6,7,9};

    int result = binarySearch(even, 6, 9);
    if (result == -1){
        cout << "Not Found";
    }else{
        cout << "Found and at the index: " << result;
    }
}