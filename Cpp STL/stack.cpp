#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<string> s;
    s.push("Garima");
    s.push("Hansa");
    s.push("End Element");

    cout << "Top Element: " << s.top() << endl;
    s.pop();
    cout << "Top Element: " << s.top() << endl;

    //Size of stack

    cout<<"Size of stack: "<< s.size() << endl;
}
