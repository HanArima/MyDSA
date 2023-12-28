#include<iostream>
#include<set>
using namespace std;

void display(set<int> v){
    for(int i:v){
        cout << i << " ";
    }
     cout<<endl;
}

int main() {
    set<int> s;

    s.insert(4);
    s.insert(7);
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);

    display(s);
    set<int>::iterator it = s.begin();
    it++;
    it++;
    s.erase(it);
    set<int>::iterator itr = s.find(5);
    cout << "Valuse at itr --> " << *itr <<endl;
    display(s);


}