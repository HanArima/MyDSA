#include <iostream>
using namespace std;

void update(int n)
{
    n++;
}

void updateRV(int &n)
{
    n++;
}

int main()
{
    int i = 5;
    // Reference Variable
    int &j = i;
    int &k = i;

    cout << i << endl;
    cout << j << endl;
    cout << j << endl;
    cout << k++ << endl;
    cout << ++k << endl;

    cout << "---------------------------------------" << endl;
    cout << "Call by Value" << endl;
    cout << "Before: " << i << endl;
    update(i);
    cout << "After: " << i << endl <<endl;

    cout << "Call by Reference" << endl;
    cout << "Before: " << i << endl;
    updateRV(i);
    cout << "After: " << i << endl;
}