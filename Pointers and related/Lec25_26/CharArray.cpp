#include <iostream>
using namespace std;

int main()
{

    char arr[6] = {'a','b','c','d','e'};
    cout << arr << endl;

    //creating pointer
    //NEVER DO THIS !!!!!!!
    char *c = &arr[0];
    cout << c << endl;
}