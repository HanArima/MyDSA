#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int armstrong=0;
    int original=n;
    while (n>0)
    {
        int lastdigit = n%10;
        armstrong += lastdigit*lastdigit*lastdigit;
        n = n/10;
    }

    if (armstrong == original )
    {
        cout << "It is an armstrong number.";
    }
    else {
        cout << "It is not an armstrong number.";
    }
    
}