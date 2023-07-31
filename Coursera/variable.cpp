#include <iostream>
using namespace std;

int main()
{
    int number = 050;
    // Numbers starting with 0 are octal numbers. The compiler will convert the octal number into decimal number and then display 40.

   cout<<number<<endl;
    return 0;

    bool fun = true;
    cout<<boolalpha<<fun<<endl;
    // Without boolalpha the output will be 0 for false and 1 for true as in C++ true and false are associated with those valuse and not 'True' or 'False'
    cout<<fun<<endl;
}
