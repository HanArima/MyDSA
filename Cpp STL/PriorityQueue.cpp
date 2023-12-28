// Basically, a sorted queue. The first element is always the greatest one.
//MAX_HEAP and MIN_HEAP

#include<iostream>
#include<queue>
using namespace std;


void display(priority_queue<int> p){
    int size = p.size();
    for(int i=0; i<size; i++){
        cout << i << " ";
    }
    cout<<endl;
} 

int main() {
    //Max Heap
    priority_queue<int> max;
    max.push(2);
    max.push(1);
    max.push(3);
    max.push(5);
    max.push(0);

    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " " ;
        max.pop();
    }cout << endl;
    
    //Min Heap
    priority_queue<int, vector<int>, greater<int>> min;

    min.push(2);
    min.push(1);
    min.push(3);
    min.push(5);
    min.push(0);

    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout << min.top() << " " ;
        min.pop();
    }cout << endl;
}