// #include <iostream>
// using namespace std;

// int main(){
//     int a;
//     int b;
//     cout << "Enter a: ";
//     cin >> a;
//     cout << "Enter b: ";
//     cin >> b;
//     // if (a > b)
//     // {
//     //     int temp;
//     //     temp = a;
//     //     a = b;
//     //     b = temp;
//     // }
//     for(int num = a; num <= b; num++){
//             int i;
//             for(i=2; i<num; i++){
//                 if(num%i==0){
//                 break;
//             }else if(i==num){
//             cout << num <<endl;
//             }
//         }
//     }
// }

#include <iostream>
using namespace std;

int main(){

    int a, b;
    cout << "Enter two numbers to find prime numbers in between: ";
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        int j;
        for (int j=2; j<i; j++){
            if(i%j == 0){
                break;
            }
        }
        if(j==i){
            cout << i << endl;
        }
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter 2 numbers: ";
//     cin >> a >> b;
//     for (int num = a; num <= b; num++){
//         int i;
//         for (i = 2; i < num; i++){
//             if (num % i == 0)
//             { // it is not prime
//                 break;
//             }
//         }
//         if (i == num)
//         { // loop has completed all iterations
//             cout << num << endl;
//         }
//     }
//     return 0;
// }
