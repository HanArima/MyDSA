#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int s = 0;
    int e = size - 0;
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
    int even[] = {2,3,4,6,7,8};

    int result = binarySearch(even, 6, 8);
    if (result == -1){
        cout << "Not Found";
    }else{
        cout << "Found and at the index: " << result;
    }
}

