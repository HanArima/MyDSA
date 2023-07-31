#include <iostream>
using namespace std;

/*
Pattern 1
Inverted Pattern
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

int main(){
    int n;
    cin >> n;

    for(int i=n; i>=1; i--){
        int k = 1;
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
Pattern 2
0-1 Pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

int main(){

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++ ){
            if((i%2!=0 && j%2!=0)||(i%2==0 && j%2==0)){
                cout << "1 ";
            }
            else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}
*/

/*
Pattern 3
Rhombus Pattern
     *****
    *****
   *****
 *****
*****

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        for(int j=n; j<=n+5;j++){
            cout << '*';
        }
        cout << endl;
    }
}
*/

/*
Pattern 4
Number Pattern
    1 
   2 2 
  3 3 3 
 4 4 4 4 
5 5 5 5 5

int main(){

    int n;
    cin >> n;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=n-i; j++){
            cout << ' ';
        }
        for(int j=n; j< n+i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

/*
Pattern 5
Palindromic Pattern
    1
   212
  32123
 4321234
543212345

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        int k=i;
        for(int j=1; j<=n-i ;j++){
            cout << " ";
        }
        for(int j=(n-i)+1; j<=n ;j++){
            cout << k;
            k--;
        }
        k++;
        for(int q=n+1; q<n+i; q++){
            k++;
            cout << k;
        }
        cout << endl;
    }
    return 0;
}
*/
/*
Pattern 6
Star Pattern
    *
   ***
  *****
 *******
*********

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i ;j++){
            cout << " ";
        }
        for(int j=(n-i)+1; j<=n ;j++){
            cout << '*';
        }
        for(int q=n+1; q<n+i; q++){
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
*/