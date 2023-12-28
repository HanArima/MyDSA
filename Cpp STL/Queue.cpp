#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<string> q;

    q.push("First");
    q.push("Second");
    q.push("Third");

    cout << "Front element: "<< q.front()<< endl;
    q.pop();
    cout << "Front element: "<< q.front()<< endl;
}