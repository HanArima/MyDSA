//It is a doubly linked list. It has both front and back pointer.
//We don't use indexes here. We use pointers and hence we must travel to there.
#include<iostream>
#include<list>
using namespace std;

void display(list<int> l){
    for(int i:l){
        cout << i << " ";
    }
     cout<<endl;
}

int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    display(l);
    l.erase(l.begin());
    display(l);

    list<int> n(5,100);
    display(n);
}