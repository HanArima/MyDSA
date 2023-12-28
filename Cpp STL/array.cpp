#include<iostream>
#include<array>
using namespace std;

int main(){
    
    array<int, 4> arr;
    arr = {1,2,3,4};

    cout << arr.front() << endl;
    cout << arr.back() << endl;
    cout << arr.at(3) << endl;
}