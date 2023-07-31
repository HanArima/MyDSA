//Write a program to output whether a number is divisible by both 2 and 3 or by only one of them.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n%2 == 0 && n%3 == 0){
        cout << n << " is divisible by both 2 and 3." << endl;
    }
    else if(n%2 == 0 && n%3 != 0){
        cout << n << " is divisible by 2." << endl;
    }
    else if(n%2 != 0 && n%3 == 0){
        cout << n << " is divisible by 3." << endl;
    }


    return 0;
}