#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v){
    for(int i:v){
        cout << i << " ";
    }
     cout<<endl;
}

int main(){
    vector<int> v;
    cout <<"Capacity: " << v.capacity() << endl;

    v.push_back(1);
    cout <<"Capacity: " << v.capacity() << endl;

    v.push_back(1);
    cout <<"Capacity: " << v.capacity() << endl;

    v.push_back(1);
    cout <<"Capacity: " << v.capacity() << endl;       //Capacity shows what is the size of vectors. Assigned memory
    cout <<"Size: " << v.size() << endl;              //Size shows how many elements are there.

    cout<< v.at(2) << endl;
    cout<< v.front() << endl;
    cout << v.back()<<endl;
    display(v);

    v.clear();
    display(v);

}