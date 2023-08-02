#include <iostream>
using namespace std;

int update(int **p)
{
    // p = p + 1;
    // kuch change hoga?? - NO

    *p = *p + 1;
    // kuch change hoga?? - YES

    //**p = **p + 1;
    // kuch change hoga?? - YES
}
int main()
{
    int a = 5;
    int *p = &a;
    int **p2 = &p;

    // cout << "Working Fine" << endl;

    // cout << "Printing a " << a << endl;
    // cout << "Adress of a " << &a << endl;

    // cout << "Printing p " << p << endl;
    // cout << "Address of p " << &p << endl;

    // cout << "Printing p2 " << p2 << endl;
    // cout << "Address of p2 " << &p2 << endl;

    // cout << a << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;
    cout << endl
         << "Before" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << p2 << endl;

    update(p2);

    cout << endl
         << "After" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << p2 << endl;
}