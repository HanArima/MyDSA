#include<bits/stdc++.h>
using namespace std;

void nLetterTriangle(int n) {
    for(int i=1; i<=n; i++){
        char count = 'A';
        for(int j=0; j<i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

int main(){
    int n = 4;
    nLetterTriangle(n);
}