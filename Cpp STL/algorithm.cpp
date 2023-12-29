#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void display(vector<int> v){
    for(auto i:v){
        cout << i << " ";
    }
    cout<<endl;
} 


int main(){
    vector<int> v;

    v.push_back(2);
    v.push_back(3);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);

    cout<<binary_search(v.begin(), v.end(), 8) << endl;

    int a = 3;
    int b = 5;
    cout << "MAx: "<< max(a,b);
    cout << "Min: "<< min(a,b);
    swap(a,b);
    cout << " Swap: " << a << b;

    string st = "abcd";
    reverse(st.begin(), st.end());
    cout << st;


    cout << "Before rotate: "<<endl;
    display(v);
    rotate(v.begin(), v.begin()+1, v.end());
    cout << "After rotate: " << endl;
    display(v);

    // Sort function is implemented using intro sort (heap sort, insertion sort, quick sort)
}