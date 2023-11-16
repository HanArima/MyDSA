// Option 1: Use array and store the binary code. It is the brute force method.
// Option 2: Use stack to store the binary code


#include<iostream>
using namespace std;

void convertToBinary(int n){
    int arr[32];
    int i = 0;
    while (n > 0){
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j --){
        cout << arr[j];
    }

}

int main(){
    int n = 24;
    convertToBinary(n);
    return 0;
}

 
