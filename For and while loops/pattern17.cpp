#include<bits/stdc++.h>
using namespace std;


void alphaHill(int n) {
   for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        int q=1;
        char count = 'A';
        for(int k=1; k<=(2*i -1); k++){
            if(q <= i){
                cout << count << " ";
                count++;
                q++;
            }else{
                count--;
                cout << count << " ";
                q++;
            }
        }

        for(int l=1; l<=n-i; l++){
            cout << " ";
        } 

        cout << endl;
    }
}

int main(){
    alphaHill(4);
}