#include <iostream>
using namespace std;

/*
Pattern 1
****
****
****
****
****
int main(){

    for(int i=0; i<5; i++){
        cout << "****" << endl;
    }
    return 0;
}
*/

/*
Pattern 1.1
****
****
****
****
****
int main(){
    for(int i=0; i<5; i++){
        for (int j=0; j<4; j++){
            cout << "*" ;
        }
        cout << endl;
    }
}
*/

/*
Pattern 2
****
*  *
*  *
*  *
****
int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            if(i==0 || i==4 || j==0 || j==3){
                cout << "*";
            }
            else{
                cout <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}
*/

/*Pattern 3
*****
****
***
**
*
int main(){

    int n;
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << '*';
        }
        cout << endl;
    }
    
    return 0;

}
*/

/*
Pattern 4
//PROUD OF YOU!!! YOU THOUGHT OF IT YOURSELF!!!//

    *
   **
  ***
 ****
*****

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j <= n-i){
                cout << ' ';
            }
            else{
                cout << '*';
            }
        }
        cout << endl;
    }
    return 0;
}
*/

/*
Pattern 5
1
22
333
4444
55555

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
*/

/*
Pattern 6
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15

int main(){
    int n,k;
    k = 1;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}
*/

/*
Pattern 7
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << '*';
        }
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout <<" ";
        }
        for(int j=1; j<=i; j++){
            cout << '*';
        }
        cout << endl;
    }

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << '*';
        }
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout <<" ";
        }
        for(int j=1; j<=i; j++){
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
*/