#include<iostream>
#include<deque>
using namespace std;

void display(deque<int> v){
    for(int i:v){
        cout << i << " ";
    }
     cout<<endl;
}

int main(){
    deque<int> d;
    d.push_back(4);
    d.push_front(2);

    display(d);

    d.pop_back();
    display(d);

    d.push_back(4);
    d.pop_front();
    display(d);

    d.push_back(4);
    d.push_front(2);

    cout << d.at(0)<<endl;
    display(d);

    // Erasing: We will have to specify the range we want to erase.
    cout<<"Max_Size of deque before erasing: " << d.max_size() << endl;
    cout<<"Size of deque before erasing: " << d.size() << endl;
    d.erase(d.begin()+1);
    cout<<"Max_Size of deque after erasing: " << d.max_size() << endl;
    cout<<"Size of deque after erasing: " << d.size() << endl;

    //Size:- Elements currently there in the deque
    //MaxSize:- The memory allocated to teh deque

}
