// Key Value Pair only.
// Key are unique, value may or may not be unique.
// IMPLEMENTED USING HASH MAPS(UNORDERED MAP) and RANDOM BLACK TREE OR BALANCE TREE(ordered map)
/* Time complexity
    Search: O(log n) --> ordered map
            O(1) --> unordered map   
 */


#include<iostream>
#include<map>

using namespace std;

void display(map<int, string> m){
    for(auto i:m){
        cout << i.first << i.second << endl;
    }
    cout<<endl;
} 

int main(){
    map<int, string> m;

    m[1] = "Garima";
    m[2] = "Hansa";
    m[7] = "Cool";

    m.insert({6, "Lame"});

    // Count function basically tries to find the count of a key as mentioned in the parameter. 
    // Since there are unique keys only, it works for finding the key as well.
    cout << "Finding a key (say 7): " << m.count(7) << endl; 

    display(m);
}